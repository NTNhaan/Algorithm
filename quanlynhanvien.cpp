#include<iostream>
#include<string>
#include<vector>
#include <iomanip>

using namespace std;
class nhanVien {
protected:
	string manhanvien;
	string hoten;
	int sogiolamviec;
public:
	nhanVien(){
		manhanvien = "";
		hoten = "";
		sogiolamviec = 0;

	}
	nhanVien(string nv, string ht, int sglv) {
		manhanvien = nv;
		hoten = ht;
		sogiolamviec = sglv;
	}
	virtual void nhap() {
		cout << "Nhap ma nhan vien :" << endl;
		cin.ignore();
		getline(cin, manhanvien);
		cout << "Nhap ho va ten : " << endl;
		getline(cin, hoten);
		cout << "Nhap so gio lam viec : " << endl;
		cin >> sogiolamviec;
	}
	virtual float tienluong() {
		if (sogiolamviec < 160)
		{
			return sogiolamviec * 100000;

		}
		else
		{
			return sogiolamviec * 120000;
		}
	}
	virtual void xuat() {
		cout << "\n thong tin nhan vien gom co :\n";
		cout << "Ma nhan vien : " << manhanvien << endl;
		cout << "Ho va ten: " << hoten << endl;
		cout << "so gio lam viec : " << sogiolamviec << endl;
		cout << "tien luong NV : " << fixed << setprecision(0)<<tienluong() << endl;

	}
	int getsogio() {
		return sogiolamviec;
	}
	string gethoten() {
		return hoten;

	}
 };
void giaicau1() {
	cout << "  cau 1  " << endl;
	int n;
	cout << "Nhap so luong danh sach :" << endl;
	cin >> n;
	vector<nhanVien> danhsachNV;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin nv thu " << i + 1 << " : " << endl;
		nhanVien h;
		h.nhap();
		danhsachNV.push_back(h);
	}
	int vitrinhanviencotienluongcaonhat = 0;
	float nhanviencotienluongcaonhat = danhsachNV[0].tienluong();
	for (int i = 1; i < danhsachNV.size(); i++)
	{
		float tienthue = danhsachNV[i].tienluong();
		if (tienthue > nhanviencotienluongcaonhat)
		{
			nhanviencotienluongcaonhat = tienthue;
			vitrinhanviencotienluongcaonhat = i;
		}
		cout << "Nhan vien co tien luong cao nhat :" << endl;
		danhsachNV[vitrinhanviencotienluongcaonhat].xuat();
	}
}
class NVquanly :public nhanVien {
private:
	float hesotrachnhiem;
public:
	NVquanly() :nhanVien() {
		hesotrachnhiem = 0;
	}
	NVquanly(string nv, string ht, int sglv, float hs) :nhanVien(nv, ht, sglv) {
		hesotrachnhiem = hs;
	}
	void nhap() override{
		nhanVien::nhap();
		cout << "Nhap he so trach nhiem : " << endl;
		cin >> hesotrachnhiem;
	}
	float tienluong() override {
		float tienluongbandau = nhanVien::tienluong();
		float tienluongheso = 0;
		tienluongheso = tienluongbandau * hesotrachnhiem;
		return tienluongbandau +  tienluongheso;
	}
	void xuat() override {
		nhanVien::xuat();
		cout << "He so trach nhiem la : " << hesotrachnhiem << endl;

	}
};

	void hienthithongtinNV(nhanVien* n) {
		n->xuat();
	}

	void giaicau2() {
		cout<<"giai cau2\n";
		nhanVien* ds[3];
		cout << "nhap thong tin nhan vien 1 : " << endl;
		ds[0]=new nhanVien;
		ds[0]->nhap();

		cout << "nhap thong tin nhan vien 2 : " << endl;
		ds[1] = new nhanVien;
		ds[1]->nhap();

		cout << "nhap thong tin nhan vien QL 1 : " << endl;
		ds[2] = new NVquanly;
		ds[2]->nhap();

		cout << "\nThong tin cac sach (su dung da hinh):\n";
		for (int i = 0; i < 3; i++) {
			cout << "\nSach " << i + 1 << ":\n";
			hienthithongtinNV(ds[i]);
		}
		for (int i = 0; i < 3; i++) {
			delete ds[i];
		}

	}


int main() {
	giaicau2();
}