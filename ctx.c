typedef unsigned char u8;
typedef signed char s8;
typedef int s32;
typedef unsigned int u32;

typedef struct sh_Model
{
    unsigned int id;
    unsigned int revision;
    unsigned int initial_matrices_offset;
    unsigned int n_skeletons;
    unsigned int skeleton_structure_offset;
    unsigned int n_skeleton_pairs;
    unsigned int skeleton_pairs_offset;
    unsigned int default_pcms_offset;
    unsigned int n_vu1_parts;
    unsigned int vu1_parts_offset;
    unsigned int n_vu0_parts;
    unsigned int vu0_parts_offset;
    unsigned int n_texture_blocks;
    unsigned int texture_blocks_offset;
    unsigned int n_text_poses;
    unsigned int text_poses_offset;
    unsigned int text_pos_params_offset;
    unsigned int n_cluster_nodes;
    unsigned int cluster_nodes_offset;
    unsigned int n_clusters;
    unsigned int clusters_offset;
    unsigned int n_func_data;
    unsigned int func_data_offset;
    unsigned int hit_offset;
    unsigned int box_offset;
    unsigned int flag;
    unsigned int relative_matrices_offset;
    unsigned int relative_transes_offset;
    void *pTexMAN[4];
} sh_Model;

typedef struct _anon5
{
    float d[4][4];
} _anon5;

typedef struct _anon3
{
    float x;
    float y;
    float z;
    float w;
} _anon3;

typedef struct shSkelton
{
    struct shSkelton *next;
    struct shSkelton *parent;
    _anon5 src_m;
    _anon3 src_t;
    _anon5 des_m;
    _anon3 des_t;
    _anon3 axis;
    float theta;
    float xx;
    float yy;
    float zz;
    float xy;
    float yz;
    float zx;
    unsigned short c_count;
    unsigned short c_speed;
    char change;
    char reserved;
    char is_key;
    char pad;
    void *untouchable;
} shSkelton;

// char* Model3SkeletonStructure(void* model_)
s8 *func_001D2E80(sh_Model *model_);
