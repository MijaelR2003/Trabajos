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
    public partial class Form3 : Form
    {
        public Form3()
        {
            InitializeComponent();
        }

        private void btnFor_Click(object sender, EventArgs e)
        {
            int primernumero, segundnumero;
            string c;
            primernumero = int.Parse(txtprimernumero.Text);
            segundnumero = int.Parse(txtsegundonumero.Text);
            if (primernumero > segundnumero)
            {
                for (int i = segundnumero; i <= primernumero; i++)
                {
                    c = Convert.ToString(i);
                    MessageBox.Show(c);
                }
            }
            else {
                for (int i = primernumero; i <= segundnumero; i++)
                {
                    c = Convert.ToString(i);
                    MessageBox.Show(c);
                }
            }
            
        }

        private void btnWhile_Click(object sender, EventArgs e)
        {
            int primernumero, segundnumero ;
            string c;
            primernumero = int.Parse(txtprimernumero.Text);
            segundnumero = int.Parse(txtsegundonumero.Text);
            if (primernumero > segundnumero)
            {
                while (segundnumero <= primernumero)
                {
                    c = Convert.ToString(segundnumero);
                    MessageBox.Show(c);
                    segundnumero++;
                }
            }
            else
            {
                while (primernumero <= segundnumero)
                {
                    c = Convert.ToString(primernumero);
                    MessageBox.Show(c);
                    primernumero++;
                }
            }
            
            
        }

        private void btnDoWhile_Click(object sender, EventArgs e)
        {
            int primernumero, segundnumero;
            string c;
            primernumero = int.Parse(txtprimernumero.Text);
            segundnumero = int.Parse(txtsegundonumero.Text);
            if (primernumero > segundnumero)
            {
                do{ 
                    c = Convert.ToString(segundnumero);
                    MessageBox.Show(c);
                    segundnumero++;
                }while (segundnumero <= primernumero);
            }
            else
            {
                do{
                    c = Convert.ToString(primernumero);
                    MessageBox.Show(c);
                    primernumero++;
                }while (primernumero <= segundnumero);
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Hide();
        }
    }
}
