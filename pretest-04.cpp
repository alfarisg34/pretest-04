/*	Nama program	: pretest-04
	Nama			: Alfari Sidnan Ghilmana
	NPM				: 140810180011
	Tanggal buat	: 26 03 2019
	Deskripsi		: 
********************************************************************/
#include<iostream>
using namespace std;
struct ElemtList{
    char npm[14];
    char nama[40];
    float ipk;
    ElemtList* next;
};

typedef ElemtList* pointer;
typedef pointer List;

void createList(List& first)
{ 
    first=NULL;
}
void createElement(List& first,pointer&pBaru)
{
    pBaru=new ElemtList;
    cout<<"Input"<<endl;
    cout<<"NPM : ";cin>>pBaru->npm;
    cout<<"Nama : ";cin>>pBaru->nama;
    cout<<"IPK : ";cin>>pBaru->ipk;
    pBaru->next=NULL;
    cout<<endl;
    if(first==NULL)
    {
        first=pBaru;
    }
    else
    {
        pBaru->next=first;
        first=pBaru;
    }
}
// void insertSortNPM()
// {
//     int i, j; 
//    for (i = 0; i < n-1; i++){       
//        for (j = 0; j < n-i-1; j++){  
//            if (pBaru->npm > pBaru->npm){ 
//               
//            }
//        }
//    } 
// }
void traversal(List first)
{
    pointer pBantu;
    pBantu=first;
    cout<<"\t\tData Mahasiswa"<<endl;
    cout<<"================================================"<<endl;
    while(pBantu!=NULL){
        cout<<pBantu->npm<<"\t\t"<<pBantu->nama<<"\t\t"<<pBantu->ipk<<endl;
        pBantu=pBantu->next;
    }
    cout<<endl;
    cout<<"================================================"<<endl;

}
int main()
{
    pointer p;
    List m;
    int n;
    createList(m);
    do{
    createElement(m,p);
    traversal(m);

    cout<<"1.Tambah data"<<endl;
    cout<<"2.Keluar"<<endl;
    cout<<"Input: ";cin>>n;
    }while(n==1);
}