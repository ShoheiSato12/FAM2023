#include"../Include/Functions.hpp"

void writeWaves(double Xinit, double Xfin, double Yinit,double Yfin, double Zinit,double Zfin,double R,int subdivision)
{
    std::ofstream doc1;
    std::ofstream doc2;
    doc1.open("Outputs/DAT/Ligante.dat");
    doc2.open("Outputs/DAT/Antiligante.dat");
    double x = Xinit;
    double y = Yinit;
    double z = Zinit;
    for (double auxi = Xinit; auxi < Xfin;auxi=auxi+(Xfin-Xinit)/subdivision)
    {
        for (double auxj = Yinit; auxj < Yfin;auxj=auxj+(Yfin-Yinit)/subdivision)
        {
            for (double auxk = Zinit; auxk < Zfin;auxk=auxk+(Zfin-Zinit)/subdivision)
            {
                doc1 << x << '\t' << y << '\t' << z << '\t' << ligante(R, Psi(x - R / 2, y, z), Psi(z + R / 2, y, z)) << "\n";
                doc2 << x << '\t' << y << '\t' << z << '\t' << ligante(R, Psi(x - R / 2, y, z), Psi(z + R / 2, y, z)) << "\n";
            }
            doc1 << "\n";
            doc2 << "\n";
        }
        doc1 << "\n";
        doc2 << "\n";
    }
    doc1.close();
    doc2.close();    
}
void writeProb(double Xinit, double Xfin, double Yinit,double Yfin, double Zinit,double Zfin,double R,int subdivision)
{
    std::ofstream doc1;
    std::ofstream doc2;
    doc1.open("Outputs/DAT/ProbLigante.dat");
    doc2.open("Outputs/DAT/ProbAntiligante.dat");
    double x = Xinit;
    double y = Yinit;
    double z = Zinit;
    for (double auxi = Xinit; auxi < Xfin;auxi=auxi+(Xfin-Xinit)/subdivision)
    {
        for (double auxj = Yinit; auxj < Yfin;auxj=auxj+(Yfin-Yinit)/subdivision)
        {
            for (double auxk = Zinit; auxk < Zfin;auxk=auxk+(Zfin-Zinit)/subdivision)
            {
                doc1 << x << '\t' << y << '\t' << z << '\t' << ProbDensity(ligante(R, Psi(x - R / 2, y, z), Psi(z + R / 2, y, z))) << "\n";
                doc2 << x << '\t' << y << '\t' << z << '\t' << ProbDensity(ligante(R, Psi(x - R / 2, y, z), Psi(z + R / 2, y, z))) << "\n";
            }
            doc1 << "\n";
            doc2 << "\n";
        }
        doc1 << "\n";
        doc2 << "\n";
    }
    doc1.close();
    doc2.close();    
}
void writeEnergies(double Rinit, double Rfin, int subdivision)
{
    std::ofstream doc1;
    std::ofstream doc2;
    doc1.open("Outputs/DAT/EnerLigante.dat");
    doc2.open("Outputs/DAT/EnerAntiligante.dat");
    for (double auxk = Rinit; auxk < Rfin;auxk=auxk+(Rfin-Rinit)/subdivision)
    {
        doc1 << auxk << '\t' << Energy_antiligante(auxk) << "\n";
        doc2 << auxk << '\t' << Energy_ligante(auxk) << "\n";
    }

}
void plot()
{
    FILE *gnu = popen("gnuplot -persist", "w");
    if (gnu)
    {
        fprintf(gnu, "\n");
        fprintf(gnu, "\n");
        fprintf(gnu, "\n");
        fprintf(gnu, "\n");
        fprintf(gnu, "\n");
        fprintf(gnu, "\n");
        fprintf(gnu, "\n");
        fprintf(gnu, "\n");
        fprintf(gnu, "\n");
    }
}

void animate()
{
    FILE *gnu = popen("gnuplot -persist", "w");
    if(gnu)
    {
        fprintf(gnu, "\n");
        fprintf(gnu, "\n");
        fprintf(gnu, "\n");
        fprintf(gnu, "\n");
        fprintf(gnu, "\n");
        fprintf(gnu, "\n");
        fprintf(gnu, "\n");
        fprintf(gnu, "\n");
        fprintf(gnu, "\n");
    }
}