#include <iostream>

using namespace std;
static int v = 0;
void *sw(int arr[]){
    int temp;
    for (int i = 0; i < v - 1; i++) {
        for (int j = 0; j < v - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

}


int main()
{



    cout << "Enter the amout of massive: " ;
    cin >> v;
    if(v < 2){
        cout << "Amount of massive can't be < 2" << endl;
        return 0;
    }

    int *array = new int[v-1];

    for(int i = 0;i<v;++i){
        cin>>array[i];
    }

    sw(array);

    for(int i = 0;i<v;++i){
        cout << array[i] << " ";
    }


    return 0;
}
