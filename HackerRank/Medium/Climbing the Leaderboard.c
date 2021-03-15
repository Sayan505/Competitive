// https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem

#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int main() {
  int tmp=0;
  int other;std::cin>>other;
  std::vector<int> scores;
  for(int i=0;i<other;i++){
      std::cin>>tmp;
      scores.push_back(tmp);
  }
  int alice;std::cin>>alice;
std::vector<int> aliceScores;
  for(int j=0;j<alice;j++){
      std::cin>>tmp;
      aliceScores.push_back(tmp);
  }
  // sort and erase duplicates
  std::sort(std::begin(scores), std::end(scores), std::greater<int>());
  scores.erase(std::unique(std::begin(scores), std::end(scores)),
               std::end(scores));

  auto locateRanking = [](const auto&_scores, auto _newScore) {
    auto itr = std::lower_bound(std::begin(_scores), std::end(_scores),
                                _newScore, std::greater<int>());
    return std::distance(std::begin(_scores), itr) + 1;
  };

  // output part
  for (auto newScore : aliceScores) {
    std::cout << locateRanking(scores, newScore) << std::endl;
  }
}