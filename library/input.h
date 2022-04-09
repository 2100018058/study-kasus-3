using namespace std;

class Input{
  public:
    void cetak()
	  {
      cout<<"Sebuah layanan cloud menyediakan hosting dengan beberapa menu sebagai berikut:"<<endl;
      cout<<"====================================" <<endl;
      cout<<"= 1) Shared Hosting     : 300 ribu =" <<endl;
      cout<<"= 2) VPS Server         : 930 ribu =" <<endl;
      cout<<"= 3) Cloud Server       : 5 juta   =" <<endl;
      cout<<"= 4) Domain Name        : 280 ribu =" <<endl;
      cout<<"====================================" <<endl;
      cout<< "Pesan Shared Hosting	: "	;cin >> beli1;
      cout<< "Pesan VPS Server		: "		;cin >> beli2;
      cout<< "Pesan Cloud Server		: "	;cin >> beli3;
      cout<< "Pesan Domain Name		: "		;cin >> beli4;
      cout<<"====================================" <<endl;
      
      cout<< "\nApakah Anda Pembeli Dari Indonesia?"<<endl;
      cout<< "Tekan 1 Jika Iya, Tekan Sembarang Jika Tidak : ";cin>>negara;
      
      cout<< "\nApakah Anda Membeli Di Bulan Ramadhan?"<<endl;
      cout<< "Tekan 1 Jika Iya, Tekan Sembarang Jika Tidak : ";cin>>ramadhan;
    }
    
    void toFile()
	{
      	write.open("api_data.txt");
      	write << beli1<< endl;
      	write << beli2 <<endl;
      	write << beli3<<endl;
      	write << beli4<<endl;
      	write << negara<<endl;
      	write << ramadhan<<endl;
      	write.close();
    }
  private:
    ofstream write;
    int beli1, beli2, beli3, beli4, negara,ramadhan;
};