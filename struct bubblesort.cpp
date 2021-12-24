#include <iostream>
#include <string>
using namespace std;

struct pesertaStruct {
    string nama;
    float tahap1, tahap2, final, disiplin;
  };


void sortedArray(pesertaStruct pesertaArray[])
{
    for(int i = 0; i < 3-1; i++)
    {
        float totalNilai1 = 0, totalNilai2 = 0;
        
        //peserta pada indeks sekarang == i
        totalNilai1 += (pesertaArray[i].tahap1 * 20) /100;
        totalNilai1 += (pesertaArray[i].tahap2 * 30) /100;
        totalNilai1 += (pesertaArray[i].final * 50) /100;
        
        
        //peserta pada indeks+1 
        totalNilai2 += (pesertaArray[i + 1].tahap1 * 20) /100;
        totalNilai2 += (pesertaArray[i + 1].tahap2 * 30) /100;
        totalNilai2 += (pesertaArray[i + 1].final * 50) /100;
        
        if(totalNilai1 > totalNilai2)
        {
            pesertaStruct temporary;
            temporary = pesertaArray[i];
            pesertaArray[i] = pesertaArray[i+1];
            pesertaArray[i+1] = temporary;
        } else if (totalNilai1 == totalNilai2)
        {
            totalNilai1 += pesertaArray[i].disiplin;
            totalNilai2 += pesertaArray[i+1].disiplin;
            
            if(totalNilai1 > totalNilai2)
            {
                pesertaStruct temporary;
                temporary = pesertaArray[i];
                pesertaArray[i] = pesertaArray[i+1];
                pesertaArray[i+1] = temporary;
            }
        }
    }
}

int main() 
{
  
    pesertaStruct pesertaArray[20];
    
    for(int i = 0; i < 3; i++)
    {
      pesertaStruct peserta; //buat struct individual peserta
      cout << "masukkan nama: ";
      cin >> peserta.nama;
      cout << "nilai tahap1: ";
      cin >> peserta.tahap1;
      cout << "nilai tahap2: ";
      cin >> peserta.tahap2;
      cout << "nilai final: ";
      cin >> peserta.final;
      cout << "nilai disiplin: ";
      cin >> peserta.disiplin;

      pesertaArray[i] = peserta;
    }
    
    sortedArray(pesertaArray);
    
    return 0;
}
