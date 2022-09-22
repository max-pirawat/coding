#include <bits/stdc++.h>
int cs[4];
using namespace std;

struct Team {
  string name;
  int score;
  int diffgoal;
  int shotgoal;
};
Team c[4];

bool compare(Team a, Team b) {
  if (a.score != b.score) {
    return a.score>b.score;
  }
  if (a.diffgoal != b.diffgoal) {
    return a.diffgoal>b.diffgoal;
  } 
  return a.shotgoal>b.shotgoal;

}

int main() {
 
  
  cin >> c[0].name >> c[1].name >> c[2].name >> c[3].name;
  int score[4][4];
 for (int i=0; i<4; i++) {
    for (int j=0;j<4; j++) {
      cin >>  score[i][j];
    }
  }
  for (int x=0; x<4;x++) {
    for (int y=0;y<4;y++) {
      if (x==y) {
        continue;
      }
      if(score[x][y] == score[y][x]) {
        c[x].score++;
      } else if (score[x][y] > score[y][x]) {
        c[x].score+=3;
      }
      c[x].diffgoal += score[x][y] - score[y][x];
      c[x].shotgoal+= score[x][y];
    }
  }
  sort(c, c+4, compare);
  for (int i=0; i<4; i++) {
    cout << c[i].name << " " << c[i].score << endl;
  }
}