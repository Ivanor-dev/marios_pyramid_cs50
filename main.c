#include <stdio.h>

int main() {
  int n =0;
  cout << "Pyramid size: ";
  cin >> n;
  cout << endl;
  for(int i = 0; i < n; i++){
    for(int g = n; i < g; g--){
        cout << " ";
    }
    for(int j = 0; j < i + 1; j++){
        cout << "#";
    }
    cout << "     ";
    for(int k = 0; k < i + 1; k++){
        cout << "#";
    }
    cout << endl;
  }
}

