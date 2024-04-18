#include <iostream>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
         if(root==NULL) return 0;

         int l=maxDepth(root->left);
         int r=maxDepth(root->right);


         return max(l,r)+1;
    }
};

int main() {
    // Construct the binary tree
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    // Create an instance of the Solution class
    Solution solution;

    // Calculate the maximum depth of the binary tree
    int depth = solution.maxDepth(root);

    // Display the maximum depth of the binary tree
    cout << "Maximum Depth of Binary Tree: " << depth << endl;

    // Free the memory allocated for the binary tree
    delete root->left;
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root;

    return 0;
}

/*


PROJECTS FAIR  | JavaScript, React Js, HTML,CSS ,FireBase 2021-22
• Created a platform for students to showcase their projects. Implemented Firebase Authentication for secure login and
registration.
• Integrated Firebase Real time Database for scalable and reliable backend functionality. Utilized the database to store and
retrieve project data.
• Improved overall functionality and usability by implementing features such as project submission.


Halo Chat App W | Next.js, Tailwind Css, MongoDB, Next Auth, Pusher 2024
• Users can easily create personalized accounts, providing them with a unique identity within the app.
• Developed Halo Chat App for real-time messaging, enabling swift and efficient message exchange.
• Implemented custom group creation feature, facilitating communication with multiple individuals simultaneously.
• Halo Chat App offers users the ability to update their profile image and name, ensuring their online presence remains current and reflective of their identity.


ImageKit.io | typescript, javascript, MongoDB,Stripe 2024
• Developed sign-in, sign-up, and email confirmation with OTP capabilities.

• Enhanced image editing capabilities by implementing object removal functionality and enabling users to revert edited images to their original state.
• Empowered users to modify colors of specific objects within images.
• Developed generative fill functionality for images, providing users with automatic area filling using generated content.
• Enhanced image editing capabilities and versatility by enabling users to easily remove backgrounds from images.




Global Rank 65 in CodeChef Jan Starters 87, 2023.
Global Rank 68 in CodeChef Mar Starters 80, 2023.
Ranked under 58 at Codechef which ranks among the top sites for competitive programmers. Highestrating of 1994 and rated 4.
Global Rank 323 in Codeforces Round 902 (Div. 2).
Solved more than 1500+ problems across platforms.
Microsoft  Al Classroom series.
Knight at leetcode
Student Ambassador of internshala from Shree LR Tiwari College.



Register yourself and put your name here only ... registration is compulsory for all. Register
yourself and put your name here:
1. Nilesh Vishwakarma
2. Adarsh dubey
3. Chinmay Ghadigaonkar
4. Pradeep Choudhary
5. Nidhi Brahmgotia
6. Vrunda Tawde
7. Neel Acharya
8. Aniket Chauhan
9. Arun Bhandari
10.Himanshu Rai
11.Varun Mahajan
12.Leelasa Thakur
13. Aman Tripathi
14. Shahbaz Khan

*/