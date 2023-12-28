   
   //iterative search
    for(m=0;m<n;m++)
    {
        if(a[m]==k)
        {
            cout<<" "<<k<< " found at position " <<m+1;
            break;
        }
    }
    if(m>=n)
    {
        cout<<"element not present in the array";
    }

//recursive search
void  linear( int p)                                       int linear(int p)                            
{
if(a[p]==k&&p<n)                                            if(a[p]==k&&p<n)

 {                                                         {
 cout<<" "<<k<< " found at position " <<p+1;                 return p;               
           exit(0);                                           }
}
else if(a[p]!=k&&p<n)                                      else if(a[p]!=k&&p<n)
{                                                            {
    linear(p+1);                                             linear(p+1);    
}                                                           }
else{                                                        else { return -1;}
    cout<<"element not present in the array"<<endl;
}

}
