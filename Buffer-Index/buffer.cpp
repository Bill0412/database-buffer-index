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
