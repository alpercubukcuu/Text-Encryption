#include <iostream>
#include<string>

using namespace std;
void sifrele(string &cumle);

int main()
{
  string cumle;
  cout << "Cumleyi girini :" << endl;
  getline(cin,cumle);
  cout<<"Girilen Cumle : "<<cumle<<endl;    
  sifrele(cumle);  
  system("PAUSE");
  return 0;
}

void sifrele(string &cumle)
{
    int sifrelenen = 0;
    for(int i=0; i<cumle.size();i++){
        if(tolower(cumle[i])==(int)'a'){
        	cumle[i] = '0';
        	sifrelenen++;
		}else if(tolower(cumle[i])==(int)'e'){
			cumle[i] = '?';
			sifrelenen++;
		}else if(tolower(cumle[i])==(int)'i' || (int)cumle[i] == -115 || (int)cumle[i] == -104){
			cumle[i] = '(';
			sifrelenen++;
		}else if(tolower(cumle[i])==(int)'o' || (int)cumle[i] == -103 || (int)cumle[i] == -108){
			cumle[i] = '=';
			sifrelenen++;
		}else if(tolower(cumle[i])==(int)'u' || (int)cumle[i] == -102 || (int)cumle[i] == -127){
			cumle[i] = '#';
			sifrelenen++;
		}         
    }
    int ilk = 0;
    int son = cumle.size() -1;
    while(ilk < son){
        char gecici = cumle[ilk];
        cumle[ilk] = cumle[son];
        cumle[son] = gecici;
        ilk++;
        son--;
    }
    cout<<"Sifreli Cumle : "<<cumle<<endl;
    cout<<"Sifrelenen harf : "<<sifrelenen<<endl;
    cout<<"Sifrelenmeyen harf : "<<cumle.size() - sifrelenen<<endl;   
    
}
