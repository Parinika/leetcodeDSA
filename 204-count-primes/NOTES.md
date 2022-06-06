int arr[n+1];
for(int i=0;i<=n;i++){
arr[i]=0;
}
for(int i=3;i<n;i=i+2){
if(arr[i]==0){
int j=3;
while((j*i)<=n){
arr[i*j]=1;
j=j+2;
}
}
}
int ans=0;
if(n>2){
ans++;
}
for(int i=3;i<n;i=i+2){
if(arr[i]==0){
ans++;
}
}
return(ans);