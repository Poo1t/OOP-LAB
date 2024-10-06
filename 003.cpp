// // // #include<iostream>

// // // using namespace std;
// // // int row,col;
// // // int **create();
// // // int row1,col1,row2,col2;
// // // void input(int **first,int **second,int col1,int col2, int row1,int row2);
// // // int main(void){
// // // int **firstMatrix=create();
// // // row1=row;col1=col;
// // // int **secondMatrix=create();
// // // row2=row;col2=col;
// // // cout<<row1<<" "<<col1<<endl;
// // // cout<<row2<<" "<<col2;

// // // input(firstMatrix,secondMatrix,col1,col2,row1,row2);


// // // delete [] firstMatrix;
// // // delete [] secondMatrix;

// // // }
// // // int **create(){
// // //     //int row,col;
// // //     cout<<"Enter the row size of matrix"<<endl;
// // //     cin>>row;
// // //     cout<<"Enter the column size of matrix"<<endl;
// // //     cin>>col;
// // //     int **creatingArray = new int*[row];
// // //     for (int i = 0; i < row; i++)
// // //     {
// // //         creatingArray[i] = new int[col];
// // //     }
// // //     return creatingArray;
// // // }

// // // void input(int **first,int **second,int col1,int col2, int row1,int row2){
// // // cout<<"Enter the elements of first matrix Note rows= "<<row1<<" , columns= "<<col1<<endl;
// // // for(int i=0;i<row1;i++){
// // //     for (int j = 0; j < col1; j++)
// // //     {
// // //         cin>>first[i][j];
// // //     }
// // // }
// // // cout<<"Enter the elements of first matrix Note rows= "<<row2<<" , columns= "<<col2<<endl;
// // // for(int i=0;i<row2;i++){
// // //     for (int j = 0; j < col2; j++)
// // //     {
// // //         cin>>first[i][j];
// // //     }
// // // }
// // // }
// // // #include<iostream>

// // // using namespace std;

// // // void fun (int a[],int b[],int c[],int size);

// // // int main(void){
// // //     int size=8;
// // //     int a[size]={1,0,1,0,1,0,1,0};
// // //     int b[size/2];
// // //     int c[size/2];
// // //     fun(a,b,c,size);
// // //     for (int i = 0; i < size; i++)
// // //     {
// // //         cout<<a[i]<<" ";
// // //     }
// // //     cout<<endl;
// // //     for (int i = 0; i < size/2; i++)
// // //     {
// // //         cout<<b[i]<<" ";
// // //     }
// // //     cout<<endl;
// // //     for (int i = 0; i < size/2; i++)
// // //     {
// // //         cout<<c[i]<<" ";
// // //     }
// // // }
// // // void fun (int a[],int b[],int c[],int size){
// // // int temp;
// // // for (int  i = 0; i < size; i++)
// // // {
// // //     for (int i = 0; i < size/2; i++)
// // //     {
// // //         for (int j = 0; j < size; j++)
// // //         {
// // //             if (a[j]==0)
// // //             {
// // //                 b[i]=0;
// // //             }
// // //             if (a[j]==1)
// // //             {
// // //                 c[i]=1;
// // //             }
            
            
// // //         }
        
// // //     }
    
   
    
// // // }


// // // }
// // // int fun(int arr[],int size){
// // // // //       int maxcount=0, num=0;
// // // // //     for (int i = 0; i < size; i++)
// // // // //     {
// // // // //         int count=0;
// // // // //         for (int j = 0; j < size; j++)
// // // // //         {

// // // // //             if( arr[i]==arr[j]){

// // // // //                 count++;
// // // // //                 if(count>1){

// // // // //                     if(maxcount<count){
// // // // //                         num=arr[i];
// // // // //                       maxcount=count;
// // // // //                     }
// // // // //                 }
// // // // //             }
// // // // //         }
        

// // // // //         /* code */
// // // // //     }
    
// // // // // return num;
// // // // // }
// // // // // int main(){
// // // // //     int arr[10]={2,4,1,3,2,5,2,3,1};
// // // // //     cout<<fun(arr,10);

// // // // // }
// // // // // // int main(){
// // // // // //      int arr[10]={12,4,34,41,23,22,45,56,453,543};
// // // // // //      for (int i = 0; i < 10; i++)
// // // // // //      {
// // // // // //         /* code */
// // // // // //         int temp=arr[i];
// // // // // //         for (int j = 0; j < 9; j++)
// // // // // //         {
// // // // // //             /* code */
           
// // // // // //            if (arr[j]<temp)
// // // // // //            {

// // // // // //             arr[i]=arr[j];
// // // // // //             arr[j]=temp;
// // // // // //             temp= arr[i];

// // // // // //             /* code */
// // // // // //            }
           

// // // // // //         }

        
// // // // // //      }

// // // // // //     for(int u=0;u<=2;u++){cout<<arr[u]<<" ";}


// // // // // // }




// // // // // // int main(){
// // // // // //     int a[5]={2,9,4,1,5};
// // // // // //     int largest;

// // // // // //     for (int i = 0; i < 5; i++)
// // // // // //     {
        
// // // // // //         for (int j = 0; j < 5; j++)
// // // // // //         {
// // // // // //             largest=a[i];
// // // // // //             if(a[j]<largest){
            
// // // // // //       largest=a[j];
// // // // // //       a[j]=a[i];
// // // // // //       a[i]=largest;
// // // // // //             }
// // // // // //         }
        
// // // // // //         }
        
    
// // // // // //     for (int i = 0; i < 3; i++)
// // // // // //     {
// // // // // //         /* code */
// // // // // //         cout<<a[i]<<" ";
// // // // // //     }
// // // // // //  }
// // // // // // void a(int& a,int& b){
// // // // // // int temp=a;
// // // // // // a=b;
// // // // // // b=temp;
// }
// // // // // // // void swap (int & a, int & b);
// // // // // // int main() {
// // // // // // int m = 10,n=11;
// // // // // // a(m,n);
// // // // // // cout<<m<<n;

// // // // // // }
// // // // // // void swap(int &c,int&d) {
// // // // // // int temp = d;
// // // // // // d = c;
// // // // // // c = temp;
// // // // // // }

// // // // // // int main(void) {
// // // // // //     int m = 10;
// // // // // // int &j = m; // j is a reference variable
// // // // // // cout << "value of m = " << m << endl;
// // // // //  //print 10

// // // // // // int row=4;
// // // // // // int col=4;
// // // // // // int **ptr= new int*[row];

// // // // // // for (int i = 0; i < col; i++)
// // // // // // {
   
// // // // // //     ptr[i]=new int [4];
// // // // // // }
// // // // // // for(int j=0;j<row;j++){
// // // // // //     for (int k = 0; k < col; k++)
// // // // // //     {
        
// // // // // //         cin>>ptr[j][k];
// // // // // //     }
    
// // // // // // }
// // // // // // for(int j=0;j<row;j++){
// // // // // //     for (int k = 0; k < col; k++)
// // // // // //     {
       
// // // // // //         cout<<ptr[j][k]<<" ";
// // // // // //     }
// // // // // //     cout<<endl;
// // // // // // }
// // // // // // for (int i = 0; i < row; i++)
// // // // // // {
// // // // // //     /* code */
// // // // // //     delete [] ptr[i];
// // // // // // }
// // // // // // delete [] ptr;

// // // // // // ptr=nullptr;

// // // // //  //}
   
// #include<iostream>

// using namespace std;
// int fun(int a[],int size);
// int main(void){
//     int a[7]={1,2,3,4,5,6,6};
//     int b=fun(a,7);

// cout<<b;


// }


// int fun(int a[],int size){
//         int count[size]={0};
// int doo=0;
// for (int i = 0; i < size; i++)
// {
//     for (int j = 0; j < size; j++)
//     {
//         /* code */
//         if(a[i]==a[j]){
//             count[i]++;
//         }
//     }
//     /* code */
// }
// for (int i = 0; i < size; i++)
// {
//     // cout<<count[i]<<" ";
// }
// for (int i = 0; i < size; i++)
// {
//     for (int j = 0; j < size; j++)
//     {
//         //doo=count[i];
//         /* code */
//         if(count[j]>doo){
//             doo=j;
//         }
//     }
//     /* code */
// }
// return a[doo];

// }
// // #include<iostream>

// // using namespace std;


// // void fun(int a[],int b[],int size){
// // int temp;
// // for (int i = 0; i < size; i++)
// // {
// //     /* code */
// //     temp=a[i];
// //     a[i]=b[i];
// //     b[i]=temp;
// // }
// // for (int i = 0; i < size; i++)
// // {
// //     /* code */
// //     cout << a[i]<<" ";
    
// // }
// // cout<<endl;
// // for (int i = 0; i < size; i++)
// // {
// //     /* code */
// //     cout << b[i]<<" ";
    
// // }

// // }


// // int main (void){

// //     int a[10]={1,2,3,4,5,6,78,9,10};
// //     int b[10]={0};
// //     fun(a,b,10);
// // }