#include "stdafx.h"
#include "FileWatcher.h"
#include "FileWatcherAdapter.h"

namespace FileWatcher
{
FileWatcher::FileWatcher::FileWatcher(HWND receiver)
    : adapter_(new FileWatcherAdapter(receiver))
{
}
FileWatcher::FileWatcher::~FileWatcher()
{
    delete adapter_;
}
void FileWatcher::FileWatcher::StartWatching(const std::string & dir, const std::vector<std::string>& files)
{
    adapter_->StartWatching(dir, files);
}
void FileWatcher::FileWatcher::StopWatching()
{
    adapter_->StopWatching();
}
}
