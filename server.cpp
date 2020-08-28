  
#include "ros/ros.h"
    #include "beginner_tutorials/AddTwoInts.h"
    
    bool add(beginner_tutorials::AddTwoInts::Request  &req,
             beginner_tutorials::AddTwoInts::Response &res)
    {
     int i;
     int j;
     int k;
     int m=req.a;
     int a[m];
     for (i=2;i<=req.a;i++){
      	int c=0;
      	for( j=1;j<=i; j++){
      		if(i%j==0){c++;}
      			// {for (k=0;k<req.a;k++){int a[k]={j};}}

      		}
      		if (c==2) res.sum.push_back(i);
      	}

      			
      				// res.sum[1]=a[1];

     // res.sum=req.a+req.b;
      
      ROS_INFO("request: x=%ld", (long int)req.a);
      if(res.sum.size()>=2)
      ROS_INFO("sending back response: [%ld]", (long int)res.sum[1]);
     return true;
   }
   
   int main(int argc, char **argv)
   {
     ros::init(argc, argv, "add_two_ints_server");
     ros::NodeHandle n;
   
     ros::ServiceServer service = n.advertiseService("add_two_ints", add);
     ROS_INFO("Ready to add two ints.");
     
     ros::spin();
   
     return 0;
 }




      //vector<int> v; 
      //res.prime = for (int k = 0; k < v.size(); k++)
      //{
       // cout<<v[k]<<endl;
      //}

      //for(i=2;i<=req.a;i++){
        //int c=0;
        //for(j=1;j<=i;j++){
          //if(i%j==0){c++}
            //if(c==2){
              //v.assign(a,i)
            //}
        //}
      //}
