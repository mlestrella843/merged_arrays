#include <iostream>
using namespace std;

//function that sort an array.
void sort_array( int array[], int sizeb ){
  int i;int j; int temp=0;
  for (j=0; j<sizeb; j++){  
     for (i=0; i<sizeb ; i++){    
        if( array[i] > array[i+1] ){
            temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;    
        }       
     }   
  }     
}


//function that sort two array and merge in another trird.
void merge_array( int array1[], int size1, int 
    array2[ ], int size2, int array3[],int size3)
{
  int i;int j; int temp=0;
  for (j=0; j<size1; j++){  
     for (i=0; i<size2 ; i++){    
        if( array1[i] > array2[i] ){
            temp = array1[i];
            array3[i] = array2[i];
            array3[i+1] = temp;    
        }  
        else{
          temp = array2[i];
          array3[i] = array1[i];
          array3[i+1] = temp;  
            }       
     }   
  }     
}


int main() {
  
int a[5] = {10,25,35,40,55};
int b[6] = {15,30,5,20,45,65}; 
int c[11]={};  
int sizeb = 6;
int sizea = 5;
int sizec = 11;
int temporal = 0;
int i=0; 

sort_array(a, 5);  
sort_array(b, 6);

cout<<"Array a sorted: ";  
for(int i=0; i < sizea; i++){    
cout<<a[i] <<",";
  }   
cout<<"\n";  
cout<<"Arreglo b sorted: ";  
for(int i=0; i < sizeb; i++){    
cout<<b[i] <<",";
  }    
cout<<"\n"; 

// mergen and sorting two arrays value by value in another third array.
merge_array( a, 5, b, 6, c, 11);

cout<<"New array merged c: ";   
      for(int k=1; k <= sizec; k++){    
      cout<<c[k] <<",";
        } 





  
  /*
     int j=0;
     for (i=0; i<sizea ; i++){    
        if( a[i] > b[i] ){       
            c[j] = b[i];        
            c[j+1] = a[i];   
            j= j+ 2;               
        }  else if (a[i] < b[i]) {
            c[j] = a[i];
            c[j+1] = b[i];   
            j = j+ 2;         
        }
       }  
      for ( int i=5; i < sizec; i++){    
            c[j] = b[i-5];
        }
      
      cout<<"New array merged c: ";   
      for(int i=0; i< sizec; i++){    
      cout<<c[i] <<",";
        }
      cout<<"\n";

  //sorting forced.
      sort_array(c, 11);  
      cout<<"New array merged c: ";   
      for(int k=1; k <= sizec; k++){    
      cout<<c[k] <<",";
        }*/
  
  return 0;
  
}