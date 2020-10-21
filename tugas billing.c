#include<stream.h>
#include<conio.h>


int main()
{
 char nama[40];
 long int penggunaan,noKomptr,ttlPenggunaan,lainnya,totalBayar,uangBayar,sisa;
 char* potonganPenggunaan;

		cout<<"   Program Hitung Biaya Pembayaran Warnet"<<endl;
		cout<<"=============================================="<<endl;
	    cout<<"No Urut Komputer		: ";cin>>noKomptr;
	    cout<<"Nama Pengguna			: ";cin>>nama;
	    cout<<"Lama Penggunaan (Jam)		: ";cin>>penggunaan;
	    cout<<"Pesanan lain (Snack/Minuman)	: Rp. ";cin>>lainnya;
	    cout<<"=============================================="<<endl;
	    cout<<endl;

			if (penggunaan>=6)
			{
			ttlPenggunaan=penggunaan*6000*0.1;
			potonganPenggunaan="5%";
			}
			else
			{
			ttlPenggunaan=penggunaan*6000;
			potonganPenggunaan="Tidak ada";
			}
			totalBayar=ttlPenggunaan+lainnya;

	    cout<<"----------------------------------------------"<<endl;
	    cout<<"   Resi Pembayaran Warnet"<<endl;
	    cout<<"----------------------------------------------"<<endl;
	    cout<<"No Urut Komputer		: "<<noKomptr<<endl;
	    cout<<"Nama Pengguna			: "<<nama<<endl;
	    cout<<"Lama Penggunaan (Jam)		: "<<penggunaan<<" Jam"<<endl;
	    cout<<"Potongan			: "<<potonganPenggunaan<<endl;
	    cout<<"Penggunaan Komputer		: Rp. "<<ttlPenggunaan<<endl;
	    cout<<"----------------------------------------------"<<endl;
	    cout<<"Total Bayar			: Rp. "<<totalBayar<<endl;
	    cout<<"=============================================="<<endl;
	        do
	    {
	        cout<<"Bayar				: Rp. ";cin>>uangBayar;
	        if(uangBayar<totalBayar)
	        cout<<"Maaf uang anda kurang!!\n";
	    }
	    while(uangBayar<totalBayar);

	     sisa=uangBayar-totalBayar;
	     cout<<"kembalian			: Rp. "<<sisa<<"\n";
	     cout<<"=============================================="<<endl;

		cout<<endl;
		cout<<"'Terima Kasih Telah Berkunjung di Warnet Kami'"<<endl;
	getch();
