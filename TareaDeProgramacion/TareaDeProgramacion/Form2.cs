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
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Hide();
        }

        private void Form2_Load(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            int N;
            string c;
            N = Convert.ToInt32(txtejercicio.Text);
            N = int.Parse(txtejercicio.Text);
            for (int i=1; i<=N; i++)
            {
                c = Convert.ToString(i);
                MessageBox.Show(c);
            }
            
        }

        private void txtejercicio_TextChanged(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {
            int N, i=1;
            string c;
            N = Convert.ToInt32(txtejercicio.Text);
            N = int.Parse(txtejercicio.Text);
            while (i <= N)
            {
                c = Convert.ToString(i);
                MessageBox.Show(c);
                i++;
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            int N, i = 1;
            string c;
            N = Convert.ToInt32(txtejercicio.Text);
            N = int.Parse(txtejercicio.Text);
            do
            {
                c = Convert.ToString(i);
                MessageBox.Show(c);
                i++;
            } while (i <= N);
        }
    }
}
