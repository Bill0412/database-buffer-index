#pragma once

// macros

#define BLOCK_LEN			4096	// the size of each block
#define MAX_FILE_ACTIVE 	5		// limit the active files in the buffer
#define MAX_BLOCK			40		// the max number of the blocks

typedef char* CString;

// Preceding declaration required
// Since the two structs instantiate each other
struct fileInfo;
struct blockInfo;

struct fileInfo {
	int type;				// 0-> data file£¬ 1 -> index file
	CString fileName;		// the name of the file
	int recordAmount;		// the number of records in the file
	int freeNum;			// the free block number which can be used for the file
	int recordLength;		// the length of the record in the file
	fileInfo *next;			// the pointer that points to the next file
	blockInfo *firstBlock;	// pointer to the first block in the file
};


struct blockInfo {
	int blockNum;	// the block number of the block,
					// which indicate it when it be newed
	bool dirtyBit;     // 0 -> flase£¬ 1 -> indicate dirty, write back
	blockInfo *next;  	// the pointer to the next block 
	fileInfo *file;     // the pointer to the file, which the block belongs to
	int charNum;	   	// the number of chars in the block
	char *cBlock;	   	// the array space for storing the records in the block in buffer
	int iTime;		// it indicate the age of the block in use 
	int lock;			// prevent the block from replacing
};



// Function Prototypes

/* NOT IMPLEMENTED.
 * Function: findBlock
 * Usage: findBlock(database_name);
 * -------------------------------
 * This function finds an available block from the block list,
 * if no block is list, it uses LRU Algorithm and, free it before
 * returning the information about the block.
 */

blockInfo*	findBlock(CString DB_Name);

/*
 * Function: replace
 * Usage: replace(fileInfo, blockInfo);
 * ------------------------------------
 * This function contains two steps:
 * 1. Binding the the blockInfo pointer to the last block in the
 *    block list of the file.
 * 2. Update which file it belongs to for a block.
 */
void replace(fileInfo * m_fileInfo, blockInfo * m_blockInfo);


