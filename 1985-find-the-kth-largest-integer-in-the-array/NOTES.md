){
if(a.length()!=b.length()){
return(a.length()>b.length());
}
int i=0;
while(i<(a.length()) and a[i]!=b[i]){
i++;
}
return((a[i]-'0')>(b[i]-'0'));