using namespace std;
class Proses
{
	public:
		void proses()
		{
			int total=(data_file[0]*300000)+(data_file[1]*930000)+(data_file[2]*5000000)+(data_file[3]*280000);
			int total1,total2,t1,t2;
			int diskonnegara,diskonramadhan,diskon;
			
			if(data_file[4]<=1)
			{
      			t1=total * 0.03;
        		total1=total-(total*0.03);
      		}
      		
			else
			{
        		t1 = 0;
        		total1 = total-0;
 		    }
 		    
      		if (data_file[5]<=1)
			{
       		 	t2 =total1 * 0.1;
		        total2=total1-t2;
      		}		
      		else
	  		{
        		t2 = 0;
		        total2=total1;
      		}
      		diskon=t1+t2;
			
			
			
			write.open("api_data.txt");
    		write<<total<<endl;
    		write<<t1<<endl;
    		write<<t2<<endl;
    		write<<total1<<endl;
    		write<<total2<<endl;
    		write<<diskon<<endl;
    		write.close();
		}
		
		void getData()
		{
    		ambil_data.open("api_data.txt");
    		int t;
    		while (!ambil_data.eof())
			{
      			ambil_data>>data_file[index];
      			index +=1;
      		}
    		ambil_data.close();
		}
		
  private :
  ofstream write;
  ifstream ambil_data;
  int beli1,beli2,beli3,beli4,negara,ramadhan;
  int data_file[100];
  int index =0;
  int total;
};