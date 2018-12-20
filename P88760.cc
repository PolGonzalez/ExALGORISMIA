#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;
using VE = vector<int>;
using QE = queue<int>;
struct rock{
    double x,y,r;
};
using VR = vector<rock>;

bool adjacent(const rock& m,const rock& n,double d){
    double dist;
    dist = sqrt((m.x-n.x)*(m.x-n.x)+(m.y-n.y)*(m.y-n.y));
    if (dist - m.r - n.r <= d) return true;
    else return false;
}

int BFS(const VR& rocks){
    QE cua;
    VE dist(n,-1);
    cua.push(0);
    dist[0] = 0;
    
    
}

int main(){
    int n, d;
    while (cin >> n >> d){
        VR rocks(n);
        for (int i = 0; i < n; ++i) cin >> rocks[i].x >> rocks[i].y >> rocks[i].r;
        int res = BFS(rocks);
        if (res == -1) cout << "Xof!" << endl;
        else cout << res << endl;
    }
}
