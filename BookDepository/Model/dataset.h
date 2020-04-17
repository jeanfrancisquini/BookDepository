#ifndef DATASET_H
#define DATASET_H


class Dataset
{
    public:
        Dataset() {}
        virtual ~Dataset() {}

    protected:

    private:
        int authors;
        int bestsellersRank;
        int categories;
        string description;
        float dimensionX;
        float dimensionY;
        float dimensionY;
        string edtion;
        string edition_statement;
};

#endif // DATASET_H
