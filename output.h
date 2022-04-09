using namespace std;
class Output
{
	
  	public :
    void cetak()
    {
      	cout << "STRUK PEMBELIAN ANDA\n";
     	cout << "Total Biaya Order		: " << data_file[0] << endl;
     	cout << "Potongan Harga			: " << data_file[5] << endl;
      	cout << "Total Tagihan			: " << data_file[4] << endl;
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