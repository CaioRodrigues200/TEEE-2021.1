#include <iostream>

using namespace std;

int main(){

    // Coin possibility generator

    int a,b,c,d,e,f,g, result;
    int check = 1; // added 200p coin possibility

    for(g=0; g<=200; g++){
        for(f=0; f<=100; f++){
            for(e=0; e<=40; e++){
                for(d=0; d<=20; d++){
                    for(c=0; c<=10; c++){
                        for(b=0; b<=4; b++){
                            for(a=0; a<=2; a++){

                                if(a*100 + b*50 + c*20 + d*10 + e*5 + f*2 + g == 200){
                                    check++;
                                }
                            };
                        };
                    };
                };
            };
        };
    };

    cout << "Possibilidades: " << check << endl;

    return 0;
}