//
//  main.cpp
//  war1
//
//  Created by No on 2014/8/2.
//  Copyright (c) 2014年 No. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

enum type{
    arrow,
    sword,
    shield
};


class warrior{
private:
    int num;
    int type;
public:
    void setNum(int temp){num=temp;}
    void setType(int temp){type=temp;}
    int getNum(){return num;};
    int getType(){return type;}
    warrior(int a,int b){
        setNum(a);
        setType(b);
    }
};


class Headquarter{
private:
    string color;
    int life;
    int order;
public:
    string getColor(){return color;}
    int getLife(){return life;}
    
};

int main(int argc, const char * argv[])
{
    int i=0;
    for(i=0;i<2;i++){
        warrior Brandon(1,arrow+i);
        cout<<"Brandon num = "<<Brandon.getNum()<<"\nBrandon type = "<<Brandon.getType()<<endl;
    }
        return 0;
}

