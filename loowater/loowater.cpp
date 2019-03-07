#include <iostream>
using namespace std;

int compare(const void* a, const void* b){
  return (*(int*)a- *(int*)b);
}

int main(){
    long long heads;
    long long knights;
    cin >> heads;
    cin >> knights;
    while (heads || knights) {
      long long temp;
      int dragon[heads-1];
      int army[knights-1];

      for (int i = 0; i < heads; i++) {
       cin >> temp;
       dragon[i] = temp;
      }

      for (int i = 0; i < knights; i++) {
       cin >> temp;
       army[i] = temp;
      }

      qsort(dragon,heads,sizeof(int),compare);
      qsort(army,knights,sizeof(int),compare);
      //sort(dragon,dragon+heads);
      //sort(army,army+knights);

      int assigned = 0; // number of heads we have assigned
      int wage = 0;
      int quartermaster = 0; //where in the army we have checked
      for (int i = 0; i < heads; i++) {
        while((quartermaster < knights )&&(i >assigned-1)){
          if(army[quartermaster]>dragon[i]-1){
            assigned += 1;
            wage += army[quartermaster];
          }
          quartermaster += 1;
        }
      }
      if (assigned==heads) {
        cout << wage;
      } else {
        cout << "Loowater is doomed!";
      }


      //---------------------------
      cin >> heads;
      cin >> knights;
      if (heads+knights>0) {
        std::cout << endl;
      }
    }


    return 0;
}
