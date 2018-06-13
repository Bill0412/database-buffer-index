#include "buffer.h"

blockInfo * findBlock(CString DB_Name)
{
	// Step 1: Check if there's available buffer block
	// If it exits, return blockInfo
	// Otherwise, Find the LRU block, set itime to 0 and
	// return it.
	return nullptr;
}

void replace(fileInfo * m_fileInfo, blockInfo * m_blockInfo)
{
	// Psudocode:
	// m_blockInfo = m_fileInfo->lastBlock
	for (m_blockInfo = m_fileInfo->firstBlock;
		m_blockInfo->next;	// If the next one is defined
		m_blockInfo = m_blockInfo->next); // propagation

	// Step 2: update the which file the block belongs to.
	m_blockInfo->file = m_fileInfo;
	
}

blockInfo * get_file_block(CString DB_Name, CString Table_Name, int fileType, int blockNum)
{
	// If: the corresponding block is already in the buffer, return the pointer to the block.
	// else: See if there's remaining dirty bit
		// If there is: m_blockNUM = blockNUM
		// else: see if the number of blocks reaches the max limitation
			// If not: allocate new block
			// else: Finding a replacable block using LRU.
	return nullptr;
}

void closeDatabase(CString DB_Name, bool m_flag)
{
	// Close every file by calling closeFile function.
}

void closeFile(CString DB_Name, CString m_fileName, int m_fileType, bool m_flag)
{
	/*
	�����ļ������ļ����ͣ������ڴ��Ƿ�������ļ������û�к�������
	����ҵ����ļ�����1�����ڿ������е�ÿ���飬����dirtyλΪ1����
	��writeBlock��DB_Name����ָ�룩�����ÿ������д�ش��̣����
	dirtyλΪ0����������Ȼ������������ӵ����������С�
	�ͷ��ļ�ͷ��struct ��

	*/
}
