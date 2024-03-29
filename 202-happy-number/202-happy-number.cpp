class Solution {
public:
  int helper(int n){
        int x;
        int sum=0;
        while(n!=0){
            x = n%10;
            x = x*x;
            sum+=x;
            n= n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        bool flag=false;
        int x,y;
        x=y=n;
        // infinite cycle detection using do while loop
        // here we have a slow variable and a fast variable 
        //if an infinite loop is there they both will catch up sometime 
        // so do while loop will get exited , now if slow or fast value is equal to 1 , return true else return false;
        
        // based on floyd cycle detection algo 
        // this algo is also used in linkedlist
        do{
            x = helper(x);
            y = helper(y);
            y = helper(y);
        }while(x!=y);
        if(x==1) return true;
        
        return flag;
    }
};