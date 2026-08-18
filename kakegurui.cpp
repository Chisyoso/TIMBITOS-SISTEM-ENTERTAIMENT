#include <iostream>
#include <vector>
#include <random>
#include <string>

bool g = true;
using namespace std;

struct cartas{
    string name;
	vector<int> c;
};

vector<cartas> cbot;

void cartas(){
cout << "tus cartas: ";
    for(int a = 0; a < 8; a++){
        cout << cbot[0].c[a] << " ";
    }
}

string gename(int a){
    a = a%10;
    switch(a){
        case 0: return "carlos";
        break;
        case 1: return "juan";
        break;
        case 2: return "pablo";
        break;
        case 3: return "jose";
        break;
        case 4: return "maikol";
        break;
        case 5: return "marta";
        break;
        case 6: return "juana";
        break;
        case 7: return "misecordia";
        break;
        case 8: return "hitler";
        break;
        case 9: return "grass gregori";
        break;
        default:
        return "random";
    }
}

int main(){
    random_device a;
    mt19937 g(a());
    uniform_int_distribution<int> gen(0, 100);
    cout << "BIENVENIDO A KAKEGURUI" << endl;
    int c = 0;
    do{ cout << "cuantos bots jugaran? maximo 10" << endl;
    	cin >> c;
        }
    while(c < 1 && c > 10);
    for(int a = 0; a < c; a++){
    cbot.push_back({gename(gen(g)),{1}});
    for(int b = 0; b < 8; b++){
        int r = gen(g) % 10;
        if(r < 9){
            cbot[a].c.push_back(r);
        }
        else{
            r = gen(g) % 5;
            cbot[a].c.push_back(0);
        }
    }
    }
    cartas();
    

    return 0;
}