// 43. Rotate an array to the left by k positions.

#include<iostream>
using namespace std;
int main()
{
  int size=5;
  int arr[size]={1,2,3,4,5};
  int arrRotate[size];

  int k_position=2;
  int value=k_position%size; // Agar position array ke size se zyada ho to usay normal range me convert karne ke liye
  
  int index=0;
  for(int i=k_position;i<size;i++)  // pehle hum 'k_position' se last tak wale numbers ko copy karte hain
  {
    arrRotate[index]=arr[i];  // arr ka element rotated array me daal diya
    index++;
  }

  for(int i=0;i<k_position;i++) // phir hum starting wale elements ko daalte hain (0 se position tak)
  {
    arrRotate[index]=arr[i];  // baqi bache hue elements yahan aa jate hain
    index++;
  }

  cout<<"Rotated Array: ";
  for(int i=0;i<size;i++)
  {
    cout<<arrRotate[i]<<" ";
  }

  return 0;
}
