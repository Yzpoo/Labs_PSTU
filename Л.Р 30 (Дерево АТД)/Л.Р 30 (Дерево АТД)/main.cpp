#include "Tree.h"
using namespace std;

Tree::Tree(string dt)
{
    country = dt;
    left = NULL;
    right = NULL;
    parent = NULL;
    cursor = false;
}

Tree::~Tree()
{
    delete this->left;
    delete this->right;
}

int Tree::height(Tree* node)
{
    int level = 1;
    while (node->left != NULL)
    {
        node = node->left;
        level++;
    }
    return level;
}

Tree* Tree::balancedTree(int n)
{
    if (n == 0)
        return NULL;
    Tree* tree = new Tree(V[ii]);
    ii++;
    tree->addLeftTree(balancedTree(n / 2));
    tree->addRightTree(balancedTree(n - n / 2 - 1));
    return tree;
}

void Tree::addLeftTree(Tree* tree)
{
    if (tree != NULL) {
        tree->parent = this;
        left = tree;
    }
}

void Tree::addRightTree(Tree* tree)
{
    if (tree != NULL) {
        tree->parent = this;
        right = tree;
    }
}

int Tree::getLevelUtil(Tree* node, string data, int level)
{
    if (node == NULL)
        return 0;

    if (node->country == data)
        return level;

    int downlevel = getLevelUtil(node->left, data, level + 1);
    if (downlevel != 0)
        return downlevel;

    downlevel = getLevelUtil(node->right, data, level + 1);
    return downlevel;
}

int Tree::getLevel(Tree* node, string data)
{
    return getLevelUtil(node, data, 1);
}

void Tree::reorderSetCoords(Tree* tree, char dir)
{
    if (tree != NULL)
    {
        int curLevel = getLevel(gc.tree, tree->getCountry());
        if (tree->parent == NULL)
            tree->b = 'К';
        else if (tree->left == NULL && tree->right == NULL)
            tree->b = 'Л';
        else
            tree->b = 'П';
        if (dir == '0')
        {
            tree->x = gc.winW / 2;
            tree->y = gc.winH - (gc.winH / gc.treeH / 2);
        }
        else if (dir == 'r')
        {
            tree->x = tree->parent->x - gc.winW / pow(2, curLevel);

            if (curLevel == ((gc.treeH / 2) + 1) and gc.treeH % 2 == 1)
                tree->y = gc.winH / 2;
            else
                tree->y = tree->parent->y - gc.winH / gc.treeH;
        }
        else if (dir == 'l')
        {

            tree->x = tree->parent->x + gc.winW / pow(2, curLevel);

            if (curLevel == ((gc.treeH / 2) + 1) and gc.treeH % 2 == 1)
                tree->y = gc.winH / 2;
            else
                tree->y = tree->parent->y - gc.winH / gc.treeH;

        }
        reorderSetCoords(tree->left, 'r');
        reorderSetCoords(tree->right, 'l');
    }
}

void drawButton1()
{
    if (gc.b1_state == 1)
        glColor3f(0.36f, 0.65f, 0.06f);
    else
        glColor3f(0.55f, 0.96f, 0.31f);
    glBegin(GL_QUADS);

    glVertex2i(0, gc.winH);
    glVertex2i(0, gc.winH - gc.winH / 18);
    glVertex2i(gc.winW / 25, gc.winH - gc.winH / 18);
    glVertex2i(gc.winW / 25, gc.winH);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2i(0, gc.winH);
    glVertex2i(0, gc.winH - gc.winH / 18);
    glVertex2i(gc.winW / 25, gc.winH - gc.winH / 18);
    glVertex2i(gc.winW / 25, gc.winH);
    glEnd();
    glRasterPos2i(2, gc.winH - 12);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '+');

    gc.b1_x = gc.winW / 25;
    gc.b1_y = gc.winH / 18;


}

void drawButton2()
{
    if (gc.b2_state == 1)
        glColor3f(0.59f, 0.06f, 0.0f);
    else
        glColor3f(0.96f, 0.36f, 0.31f);
    glBegin(GL_QUADS);
    glVertex2i(0, gc.winH - (3 / 2) * gc.b1_y);
    glVertex2i(0, (gc.winH - gc.winH / 18) - (3 / 2) * gc.b1_y);
    glVertex2i(gc.winW / 25, (gc.winH - gc.winH / 18) - (3 / 2) * gc.b1_y);
    glVertex2i(gc.winW / 25, (gc.winH - (3 / 2) * gc.b1_y));
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_LOOP);

    glVertex2i(0, gc.winH - (3 / 2) * gc.b1_y);
    glVertex2i(0, (gc.winH - gc.winH / 18) - (3 / 2) * gc.b1_y);
    glVertex2i(gc.winW / 25, (gc.winH - gc.winH / 18) - (3 / 2) * gc.b1_y);
    glVertex2i(gc.winW / 25, (gc.winH - (3 / 2) * gc.b1_y));
    glEnd();

    glRasterPos2i(2, gc.winH - (3 / 2) * gc.b1_y - 12);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '-');

    gc.b2_x = gc.winW / 25;
    gc.b2_y = gc.winH / 18 + (3 / 2) * gc.b1_y;

}



void drawCircle(int x, int y)
{
    glColor3f(0.13f, 0.9f, 0.33f);
    float x1, y1;
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(360);
        y1 = gc.R / 1.5 * cos(theta) + y;
        x1 = gc.R / 1.5 * sin(theta) + x;;

        glVertex2f(x1, y1);

    }
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    float x2, y2;
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(360);
        y2 = gc.R / 1.5 * cos(theta) + y;
        x2 = gc.R / 1.5 * sin(theta) + x;;

        glVertex2f(x2, y2);

    }
    glEnd();

}

void drawBorderedCircle(int x, int y)
{
    glColor3f(0.0f, 0.58f, 0.17f);
    float x1, y1;
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(360);
        y1 = gc.R / 1.5 * cos(theta) + y;
        x1 = gc.R / 1.5 * sin(theta) + x;;

        glVertex2f(x1, y1);

    }
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    float x2, y2;
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(360);
        y2 = gc.R / 1.5 * cos(theta) + y;
        x2 = gc.R / 1.5 * sin(theta) + x;;

        glVertex2f(x2, y2);
    }
    glEnd();
}

void drawLine(int x0, int y0, int x1, int y1)
{
    glColor3f(0.29f, 0.18f, 0.03f);
    glBegin(GL_LINES);
    glVertex2i(x0, y0);
    glVertex2i(x1, y1);
    glEnd();
}

Tree* checkCircle(Tree* node, int x, int y)
{
    if (pow(x - node->getX(), 2) + pow(y - node->getY(), 2) <= pow(gc.R, 2))
        return node;
    Tree* temp = NULL;
    if (node->getLeft() != NULL)
        temp = checkCircle(node->getLeft(), x, y);
    if (temp != NULL)
        return temp;
    if (node->getRight() != NULL)
        temp = checkCircle(node->getRight(), x, y);
    return temp;
}

Tree* Tree::getNode(int x, int y)
{
    Tree* node = this;
    node = checkCircle(node, x, y);
    return node;
}

void display()
{
    glShadeModel(GL_SMOOTH);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, gc.winW, 0, gc.winH);
    glViewport(0, 0, gc.winW, gc.winH);
    glClearColor(1, 1, 1, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    Tree* tree = gc.tree;
    int R = 3 * (gc.winH / gc.treeH) / 4;
    gc.R = (R / 2) / (gc.winH / gc.winW + 1) - gc.shift;
    tree->reorderSetCoords(tree, '0');
    queue<Tree*> Q;
    Tree* current = NULL;;

    Q.push(tree);
    int x0, y0, x1, y1;

    drawButton1();
    drawButton2();

    while (!Q.empty())
    {
        tree = Q.front();
        Q.pop();
        x0 = tree->getX();
        y0 = tree->getY();
        if (tree->getLeft())
        {
            current = tree->getLeft();
            Q.push(current);
            x1 = current->getX();
            y1 = current->getY();
            drawLine(x0, y0, x1, y1);
        }
        if (tree->getRight())
        {
            current = tree->getRight();
            Q.push(current);
            x1 = current->getX();
            y1 = current->getY();
            drawLine(x1, y1, x0, y0);
        }
        drawCircle(x0, y0);
        drawText(tree->getCountry(), x0, y0, false);

        if (tree->getCursor())
        {
            drawBorderedCircle(x0, y0);
            drawText(tree->getCountry(), x0, y0, true);
            tree->drawAtribute();
            tree->setCursor(false);
        }
    }
    glutSwapBuffers();

}

void Tree::drawAtribute()
{
    if (gc.winH > 200)
    {
        glColor3f(0.0f, 0.0f, 0.0f);
        GLvoid* font_style = GLUT_BITMAP_HELVETICA_18;
        int newX = 2;
        int newY = gc.winH - gc.b2_y - 10;
        int ka = 18;
        string temp;
        string fullB;
        if (this->b == 'К')
            fullB = "Root";
        else if (this->b == 'П')
            fullB = "Node";
        else if (this->b == 'Л')
            fullB = "Leaf";
        string fullNode = this->country + '(' + fullB + ')';

        glRasterPos2i(newX, newY - ka);
        for (int i = 0; i < fullNode.length(); i++)
            glutBitmapCharacter(font_style, fullNode[i]);
    }
}

void mouseMove(int x, int y)
{
    Tree* node = gc.tree->getNode(x, gc.winH - y);

    if (node != NULL)
    {
        node->setCursor(true);
    }

    if (x <= gc.b1_x and y <= gc.b1_y)
        gc.b1_state = 1;
    else
        gc.b1_state = 0;

    if (x <= gc.b2_x and y <= gc.b2_y and y >= gc.b1_y)
        gc.b2_state = 1;
    else
        gc.b2_state = 0;
    glutPostRedisplay();
}

void mouseClick(int button, int state, int x, int y)
{
    if (x <= gc.b1_x and y <= gc.b1_y)
    {
        if (button == GLUT_LEFT_BUTTON && state == GLUT_UP)
        {
            ii = 0;
            drawTree(gc.winW, gc.winH, 10, 1);
        }
    }
    if (x <= gc.b2_x and y <= gc.b2_y and y >= gc.b1_y)
    {
        if (button == GLUT_LEFT_BUTTON && state == GLUT_UP)
        {
            if (gc.nodes == 1)
                cout << "\n" << "Нельзя удалить корень" << "\n";
            else
            {
                string dt;
                ii = 0;
                cout << "Введите значение элемента, который хотите удалить: ";
                getline(cin, dt);

                for (vector<string>::iterator i = V.begin(); i != V.end(); i++)
                {
                    if (dt == *i)
                    {
                        vector<string>::iterator j = i;
                        V.erase(j);
                        gc.nodes--;
                        break;
                    }
                }
                drawTree(gc.winW, gc.winH, 10, 0);
                cout << "Элемент удалён." << endl;
            }
        }
    }
}

void reshape(int w, int h)
{
    gc.winW = w;
    gc.winH = h;
    glViewport(0, 0, (GLsizei)gc.winW, (GLsizei)gc.winH);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, (GLdouble)gc.winW, 0, (GLdouble)gc.winH);
    glutPostRedisplay();
}

void drawText(string data, int x0, int y0, bool state)
{
    if (gc.winH < 375 or gc.winW < 375)
        return;

    GLvoid* font_style;
    int counter = 0;
    vector<string> v;
    string temp;
    int strX;
    int strY = 12;

    if (state == true)
    {
        font_style = GLUT_BITMAP_9_BY_15;
        glColor3f(1.0f, 1.00f, 1.0f);
        strX = 9;
    }
    else
    {
        glColor3f(0.0f, 0.0f, 0.0f);
        font_style = GLUT_BITMAP_8_BY_13;
        strX = 8;
    }

    for (int i = 0; i < data.length() + 1; i++)
    {
        temp += data[i];
        if (data[i] == ' ' or data[i] == '\0')
        {
            counter++;
            v.push_back(temp);
            temp = "";
        }
    }
    int y = y0 + ((strY * counter / 2)) - 5;
    for (int i = 0; i < v.size(); i++)
    {
        int ka = v[i].length() / 2;
        glRasterPos2i(x0 - ka * strX, y - (strY * i));
        for (int j = 0; j < v[i].length(); j++)
            glutBitmapCharacter(font_style, v[i][j]);
    }
}

void drawTree(int window_width, int window_height, int shift, int n)
{
    static bool start = false;
    for (int i = 0; i < n; i++)
    {

        bool yes = false;
        string dt;
        cout << "Введите " << gc.nodes + 1 << " элемент дерева: ";
        getline(cin, dt);

        for (int i = 0; i < V.size(); i++)
            if (dt == V[i])
                yes = true;
        if (!yes)
        {
            V.push_back(dt);
            gc.nodes++;
        }
        else
        {
            if (!start)
            {
                cout << "Ошибка!" << endl;
                n++;
            }
            else
            {
                if (gc.nodes == 1)
                    cout << "\n" << "Нельзя удалить корень" << "\n";
                else
                {
                    for (vector<string>::iterator i = V.begin(); i != V.end(); i++)
                    {
                        if (dt == *i)
                        {
                            vector<string>::iterator j = i;
                            V.erase(j);
                            gc.nodes--;
                            break;
                        }
                    }
                    cout << "Заданный элемент найден в дереве. Элемент удалён." << endl;
                }
            }

        }

    }
    Tree* tree = Tree::balancedTree(gc.nodes);
    gc.tree = tree;
    gc.winW = window_width;
    gc.winH = window_height;
    gc.shift = shift;
    gc.treeH = tree->height(tree);
    gc.treeW = pow(2, gc.treeH - 1);
    tree->reorderSetCoords(tree, '0');
    glViewport(0, 0, gc.winW, gc.winH);
    start = true;
}

