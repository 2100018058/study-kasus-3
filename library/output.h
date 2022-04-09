using namespace std;

class Output{
  	public :
    void cetak()
    {
      cout << "\n=====================================";
      cout << "\n=\t\tSTRUK PEMBELIAN ANDA\t\t=\n";
      cout << "=====================================\n";
     	cout << "Total Biaya Order		: Rp." << data_file[0] << endl;
      cout << "-------------------------------------" << endl;
      cout << "\tDiskon Region       : Rp." << data_file[1] << endl;
      cout << "\tDiskon Ramadhan     : Rp." << data_file[2] << endl;
     	cout << "\tDiskon Total        : Rp." << data_file[5] << endl;
      cout << "-------------------------------------" << endl;
      cout << "Total Tagihan			: Rp." << data_file[4] << endl;
      cout << "=====================================\n";
    }
    void getData()
    {  
      	ambil_data.open("api_data.txt");
      	string t;
      	while(!ambil_data.eof())
        {
         	ambil_data >> data_file[index];
            index += 1;
        }
      	ambil_data.close();
    }
  	private :
    ifstream ambil_data;
    string data_file[30];
    int index = 0;
};
