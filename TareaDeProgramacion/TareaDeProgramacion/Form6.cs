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
    public partial class Form6 : Form
    {
        public Form6()
        {
            InitializeComponent();
        }

        private void btndivisores_Click(object sender, EventArgs e)
        {
            
            int primernumero, segundnumero;
            string c;
            primernumero = int.Parse(txtprimernumero.Text);
            segundnumero = int.Parse(txtsegundonumero.Text);
            if (primernumero > segundnumero)
            {
                for (int i = segundnumero; i <= primernumero; i++)
                {
                    if (primernumero % i == 0)
                    {
                        c = Convert.ToString(i);
                        MessageBox.Show(c);
                    }
                }
            }
            else
            {
                for (int i = primernumero; i <= segundnumero; i++)
                {
                    if (segundnumero % i == 0)
                    {
                        c = Convert.ToString(i);
                        MessageBox.Show(c);
                    }
                }
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Hide();
        }
    }
}
