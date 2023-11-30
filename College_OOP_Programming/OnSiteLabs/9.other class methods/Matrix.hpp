    class Matrix
    {
    private:
        int x;//wiersze
        int y;//kolumny
        double *data;

    public:
        Matrix();
        Matrix(const Matrix &m);
        Matrix(int x, int y);
        ~Matrix();
        Matrix& operator=(const Matrix  &mab2);
        double& operator()(int x, int y);
        const double& operator()(int x, int y)const;

    };
