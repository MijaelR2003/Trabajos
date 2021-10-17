using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp4
{
    public partial class Ejercicio_6 : Form
    {

        
        public Ejercicio_6()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {
            
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            
        }

        
        private void button1_Click(object sender, EventArgs e)
        {
            double A = Convert.ToDouble(textBox1.Text);
            double B = Convert.ToDouble(textBox2.Text);

            double MCD = 0;
            double resultado=0;

            if (A == B) 
            {
                MCD = A;
            }

            if(0==A || 0 == B) 
            {
                MCD = (0 == A) ? B : A;
            }
            else
            {            
                if (A > B) 
                {
                    MCD = resultado;
                }
                else 
                {
                    MCD = resultado;
                }
                    

            }
            
            do
            {
                resultado = B;
                B = A % B;
                A = resultado;

            } while (B != 0);


            textBox3.Text = "El Maximo Común Divisor de "+ " A y B es: "+resultado.ToString();
        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {
            
        }
    }

}

