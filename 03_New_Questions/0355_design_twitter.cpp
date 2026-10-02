// Problem: 355. Design Twitter
// Link: https://leetcode.com/problems/design-twitter/
// Difficulty: Medium
// Time Complexity: O(1) post/follow/unfollow, O(k log k) getNewsFeed
// Space Complexity: O(U + T)

#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>

class Twitter {
    struct Tweet {
        int id;
        int time;
        Tweet(int _id, int _time) : id(_id), time(_time) {}
    };

    int globalTime;
    std::unordered_map<int, std::vector<Tweet>> userTweets;
    std::unordered_map<int, std::unordered_set<int>> following;

public:
    Twitter() : globalTime(0) {}

    void postTweet(int userId, int tweetId) {
        userTweets[userId].push_back(Tweet(tweetId, ++globalTime));
    }

    std::vector<int> getNewsFeed(int userId) {
        // Min-heap of size 10 to keep 10 latest tweets
        auto cmp = [](const Tweet& a, const Tweet& b) { return a.time > b.time; };
        std::priority_queue<Tweet, std::vector<Tweet>, decltype(cmp)> minHeap(cmp);

        std::unordered_set<int> feedUsers = following[userId];
        feedUsers.insert(userId); // User follows themselves

        for (int uId : feedUsers) {
            const auto& tweets = userTweets[uId];
            int count = 0;
            for (int i = static_cast<int>(tweets.size()) - 1; i >= 0 && count < 10; --i, ++count) {
                minHeap.push(tweets[i]);
                if (minHeap.size() > 10) minHeap.pop();
            }
        }

        std::vector<int> feed(minHeap.size());
        for (int i = static_cast<int>(feed.size()) - 1; i >= 0; --i) {
            feed[i] = minHeap.top().id;
            minHeap.pop();
        }
        return feed;
    }

    void follow(int followerId, int followeeId) {
        if (followerId != followeeId) {
            following[followerId].insert(followeeId);
        }
    }

    void unfollow(int followerId, int followeeId) {
        following[followerId].erase(followeeId);
    }
};
