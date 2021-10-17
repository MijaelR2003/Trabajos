using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TareaDeProgramacion
{
    public partial class Form7 : Form
    {
        public Form7()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            double A = Convert.ToDouble(textBox1.Text);
            double B = Convert.ToDouble(textBox2.Text);

            double MCD = 0;
            double resultado = 0;

            if (A == B)
            {
                MCD = A;
            }

            if (0 == A || 0 == B)
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


            textBox3.Text = "El Maximo Común Divisor de " + " A y B es: " + resultado.ToString();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.Hide();
        }

        private void Form7_Load(object sender, EventArgs e)
        {

        }
    }
}
