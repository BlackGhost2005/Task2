//#include<iostream>
//#include<cassert>
//#include<vector>
//using namespace std;
//
//
//
//
//class Car
//{
//    string Model;
//    string Color;
//    int year;
//    float engine;
//    string fuel;
//
//public:
//    Car() : Model(), Color(), year(), engine(), fuel() {}
//    Car( const string Model, const string Color, const int year,const float engine, const string fuel) {
//
//        setModel(Model);
//        setColor(Color);
//        setYear(year);
//        setEngine(engine);
//        setFuel(fuel);
//    }
//
//
//
//    string getModel() { return this->Model; }
//    string getColor() { return this->Color; }
//    int getYear() { return this->year; }
//    float getEngine() { return this->engine; }
//    string getFuel() { return this->fuel; }
//
//    void setModel(const string Model) {
//
//
//
//        if (Model.length() >= 2)
//        {
//            this->Model = Model;
//            return;
//        }
//        assert(!"Model minimum 2 herf olmalidir ! ");
//    }
//
//    void setYear(const int year) {
//
//
//
//        if (year >= 1800)
//        {
//            this->year = year;
//            return;
//        }
//        assert(!"Il sehvdir ! ");
//    }
//
//    void setEngine(const float engine) {
//
//
//
//        if (engine >= 1.0)
//        {
//            this->engine = engine;
//            return;
//        }
//        assert(!"Engine sehvdir ! ");
//    }
//
//    void setFuel(const string fuel) {
//
//
//
//        if (fuel == "Benzin" || fuel == "Dizel")
//        {
//            this->fuel = fuel;
//            return;
//        }
//        assert(!"Fuel sehvdir ! ");
//    }
//
//    void setColor(const string Color) {
//
//
//
//        if (Color.length() >= 2)
//        {
//            this->Color = Color;
//            return;
//        }
//        assert(!"Color minimum 2 herf olmalidir ! ");
//    }
//
//
//    virtual void Show()
//    {
//        cout << "Model : " << this->Model << endl;
//        cout << "Color : " << this->Color << endl;
//        cout << "Year : " << this->year << endl;
//        cout << "Engine : " << this->engine << endl;
//        cout << "Fuel : " << this->fuel << endl;
//    }
//};
//
//
//
//class Manual :public Car
//{
//    int qizdirici;
//public:
//    Manual() :qizdirici() {}
//    Manual( const string Model,const string Color, const int year, const float engine, const string fuel, const int qizdirici) :Car( Model,Color, year, engine,fuel)
//    {
//        setModel(Model);
//        setColor(Color);
//        setYear(year);
//        setEngine(engine);
//        setFuel(fuel);
//        setQizdirici(qizdirici);
//    }
//
//    int getQizdirici() { return this->qizdirici; }
//
//    void setQizdirici(const int qizdirici) {
//
//
//
//        if (qizdirici >= 30 && qizdirici <= 45)
//        {
//            this->qizdirici = qizdirici;
//            return;
//        }
//        assert(!"Qizdiricinin derecesi  sehvdir ! ");
//    }
//
//    virtual void Show() override
//    {
//        cout << "Car Type : Manual " << endl;
//        Car::Show();
//        cout << "Qizdirici : " << this->qizdirici << endl;
//    }
//};
//
//
//class Niva :public Manual
//{
//    string Qapi_Rengi;
//public:
//    Niva(const string Model, const string Color, const int year, const float engine, const string fuel, const int qizdirici, const string Qapi_Rengi) :Manual(Model, Color, year, engine, fuel, qizdirici)
//    {
//        setModel(Model);
//        setColor(Color);
//        setYear(year);
//        setEngine(engine);
//        setFuel(fuel);
//        setQizdirici(qizdirici);
//        setQapi_Rengi(Qapi_Rengi);
//    }
//
//    string getQapi_Rengi() { return this->Qapi_Rengi; }
//
//    void setQapi_Rengi(const string Qapi_Rengi) {
//
//
//
//        if (Qapi_Rengi.length() >= 2)
//        {
//            this-> Qapi_Rengi = Qapi_Rengi;
//            return;
//        }
//        assert(!"Qapi rengi sehvdir !");
//    }
//
//    void Show() override
//    {
//        cout << "Marka : Niva" << endl;
//        Manual::Show();
//        cout << "Qapi rengi : " << this->Qapi_Rengi << endl;
//        cout << endl;
//    }
//};
//
//
//class GAZ :public Manual
//{
//    int Yuk_Tutumu;
//public:
//    GAZ(const string Model, const string Color, const int year, const float engine, const string fuel, const int qizdirici, const int Yuk_Tutumu) :Manual(Model, Color, year, engine, fuel, qizdirici)
//    {
//        setModel(Model);
//        setColor(Color);
//        setYear(year);
//        setEngine(engine);
//        setFuel(fuel);
//        setQizdirici(qizdirici);
//        setYuk_Tutumu(Yuk_Tutumu);
//    }
//
//    int getYuk_Tutumu() { return this->Yuk_Tutumu; }
//
//    void setYuk_Tutumu(const int Yuk_Tutumu) {
//
//
//
//        if (Yuk_Tutumu > 0)
//        {
//            this->Yuk_Tutumu = Yuk_Tutumu;
//            return;
//        }
//        assert(!"Yuk tutumu sehvdir ! ");
//    }
//
//    void Show() override
//    {
//        cout << "Marka : GAZ" << endl;
//        Manual::Show();
//        cout << "Yuk tutumu : " << this->Yuk_Tutumu << " kq " << endl;
//        cout << endl;
//    }
//};
//
//
//
//class Automatic :public Car
//{
//    int soyuducu;
//public:
//    Automatic() :soyuducu() {}
//    Automatic( const string Model,const string Color, const int year, const float engine, const string fuel, const int soyuducu) :Car( Model,Color, year, engine, fuel)
//    {
//        setModel(Model);
//        setColor(Color);
//        setYear(year);
//        setEngine(engine);
//        setFuel(fuel);
//        setSoyuducu(soyuducu);
//    }
//
//    int getSoyuducu() { return this->soyuducu; }
//
//    void setSoyuducu(const int soyuducu) {
//
//
//
//        if (soyuducu < 30 && soyuducu >= 10)
//        {
//            this->soyuducu = soyuducu;
//            return;
//        }
//        assert(!"Soyuducunun derecesi  sehvdir ! ");
//    }
//
//
//
//    virtual void Show() override
//    {
//        cout << "Car Type : Automatic" << endl;
//        Car::Show();
//        cout << "Soyuducu : " << this->soyuducu << endl;
//    }
//};
//
//
//
//class BMW :public Automatic
//{
//    int Oturacaq_Sayi;
//public:
//    BMW(const string Model, const string Color, const int year, const float engine, const string fuel, const int soyuducu, const int Oturacaq_Sayi) :Automatic(Model, Color, year, engine, fuel, soyuducu)
//    {
//        setModel(Model);
//        setColor(Color);
//        setYear(year);
//        setEngine(engine);
//        setFuel(fuel);
//        setSoyuducu(soyuducu);
//        setOturacaq_Sayi(Oturacaq_Sayi);
//    }
//
//    int getOturacaq_Sayi() { return this->Oturacaq_Sayi; }
//
//    void setOturacaq_Sayi(const int Oturacaq_Sayi) {
//
//
//
//        if (Oturacaq_Sayi > 0 && Oturacaq_Sayi <= 10)
//        {
//            this->Oturacaq_Sayi = Oturacaq_Sayi;
//            return;
//        }
//        assert(!"Oturacaq sayi sehvdir ! ");
//    }
//
//    void Show() override
//    {
//        cout << "Marka : BMW" << endl;
//        Automatic::Show();
//        cout << "Oturacaq sayi : " << this->Oturacaq_Sayi << endl;
//        cout << endl;
//    }
//};
//
//
//class Mercedes :public Automatic
//{
//    int Qapi_Sayi;
//public:
//    Mercedes(const string Model, const string Color, const int year, const float engine, const string fuel, const int soyuducu, const int Qapi_Sayi) :Automatic(Model, Color, year, engine, fuel, soyuducu)
//    {
//        setModel(Model);
//        setColor(Color);
//        setYear(year);
//        setEngine(engine);
//        setFuel(fuel);
//        setSoyuducu(soyuducu);
//        setQapi_Sayi(Qapi_Sayi);
//    }
//
//    int getQapi_Sayi() { return this->Qapi_Sayi; }
//
//    void setQapi_Sayi(const int Qapi_Sayi) {
//
//
//
//        if (Qapi_Sayi > 0 && Qapi_Sayi <= 10)
//        {
//            this->Qapi_Sayi = Qapi_Sayi;
//            return;
//        }
//        assert(!"Qapi sayi sehvdir ! ");
//    }
//
//    void Show() override
//    {
//        cout << "Marka : Mercedes" << endl;
//        Automatic::Show();
//        cout << "Qapi sayi : " << this->Qapi_Sayi << endl;
//        cout << endl;
//    }
//};
//
//
//
//
//int main() {
//
//
//
//    vector<Car*>cars;
//    cars.push_back(new BMW("X6", "Blue", 2016, 5.0, "Benzin", 20, 5));
//    cars.push_back(new Mercedes("S-Class", "Black", 2020, 5.5, "Benzin", 25, 6));
//    cars.push_back(new Niva("07", "Black", 2007, 2.0, "Dizel", 40, "Black"));
//    cars.push_back(new GAZ("Ultora", "White", 2000, 3.5, "Dizel", 40, 2000));
//
//
//    for (Car* item : cars)
//    {
//        item->Show();
//    }
//};