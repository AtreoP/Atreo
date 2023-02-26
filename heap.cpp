#include<iostream>
using namespace std;
class heap{
    public:
    heap(){
        size=0;
        arr[0]=-1;
    }
    int arr[100];
    int size=0;
    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;
        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }  
    void deleteheap(){
        if(size==0){
            cout<<"nothing to delete"<<endl;
            return;
        }
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size){
            int l=2*i;
            int r=2*i+1;
            if(l<size && arr[i]<arr[l]){
                swap(arr[i],arr[l]);
                i=l;
                }
            else if(r<size && arr[i]<arr[r]){
                swap(arr[i],arr[r]);
                i=r;
            }
            else{
                return;
            }
        }
    }
    void heapify(int arr[],int n,int i){
        int largest;
        int l=2*i;
        int r=2*i+1;
        if(l<n && arr[largest]<arr[l]){
            largest=l;
        }
        else if(r<n && arr[largest]<arr[r]){
            largest=r;
        }
        if(largest!=i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }

    }
};
int main(){
    heap h;
    h.insert(10);
    h.insert(20);
    h.insert(15);
    h.insert(5);
    h.insert(30);
    h.print();
    h.deleteheap();
    h.print();
    int arr[6]={-1,10,20,50,30,40};
    int n=5;
    for(int i=n/2;i>0;i--){
        h.heapify(arr,n,i);
    }
    cout<<"printing the array"<<endl;
    for(int i=1;i<n;i++){
        cout<<arr[i];
    }cout<<endl;
    return 0;
}