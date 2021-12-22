using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Lab01_Noshik_02
{
    public partial class Lab01_Noshik_gr02 : Form
    {

        public Lab01_Noshik_gr02()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
        int old_x, old_y;
        List<Figure> lst = new List<Figure>();

        Figure createFigure(string fig_type)
        {
            switch (fig_type)
            {
                case "Circle": return new Circle();
                case "Square": return new Square();
                case "Triangle": return new Triangle();
            }
            return null;
        }
        

        void Pictures_Paint(object sender, PaintEventArgs e)
        {
            e.Graphics.FillRectangle(Brushes.White, 0, 0,
               Pictures.Width, Pictures.Height);
            foreach (Figure fig in lst)
                fig.draw(e.Graphics);

        }

        void Pictures_MouseDown(object sender, MouseEventArgs e)
        {
            foreach (Figure fig in lst)
                fig.selected = false;
            for (int i = lst.Count - 1; i >= 0; i--)
            {
                Figure fig = lst[i];
                fig.selected |= fig.test(e.X, e.Y);
                if (fig.selected == true) break;
            }
            Pictures.Invalidate();
        }
        void Pictures_MouseMove(object sender, MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Left)
            {
                int dx = e.X - old_x;
                int dy = e.Y - old_y;
                foreach (Figure fig in lst)
                {
                    if (fig.selected == false) continue;
                    fig.pos_x += dx;
                    fig.pos_y += dy;
                }
                Pictures.Invalidate();
            }
            old_x = e.X;
            old_y = e.Y;
        }

        int circleIndex = 1;
        int rectangleIndex = 1;
        int triangleIndex = 1;

        void Add_Click(object sender, EventArgs e)
        {
            Figure fig = createFigure(typesfigure.Text);
            if (fig == null) return;
            fig.pos_x = 100.0f;
            fig.pos_y = 100.0f;
            lst.Add(fig);
            switch (typesfigure.Text)
            {
                case "Circle": listBox.Items.Add(typesfigure.Text + circleIndex.ToString()); circleIndex++; break;
                case "Square": listBox.Items.Add(typesfigure.Text + rectangleIndex.ToString()); rectangleIndex++; break;
                case "Triangle": listBox.Items.Add(typesfigure.Text + triangleIndex.ToString()); triangleIndex++; break;
            }
            Pictures.Invalidate();
        }


        private void Lab01_Noshik_gr02_Load(object sender, EventArgs e)
        {

        }

        void Delete_Click(object sender, EventArgs e)
        {
            int i = 0;
            while (i < lst.Count)
            {
                if (lst[i].selected == true)
                {
                    lst.RemoveAt(i);
                    listBox.Items.RemoveAt(i);
                    i++;
                }
            }
            Pictures.Invalidate();
        }

        private void listBox_SelectedIndexChanged(object sender, EventArgs e)
        {
            foreach (Figure fig in lst)
                fig.selected = false;
            for (int i = lst.Count - 1; i >= 0; i--)
            {
                
               Figure fig = lst[Convert.ToInt32(listBox.SelectedIndex)];
               fig.selected = true;
                
            }
            Pictures.Invalidate();
        }
    }
}
