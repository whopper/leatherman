/**
 * @file
 * Declares utility functions for enumerating directories.
 */
#pragma once

#include <string>
#include <functional>

namespace leatherman { namespace file_util {

    /**
     * Enumerates the files that match the given pattern in the given directory.
     * @param path The directory path to search for the files.
     * @param callback The callback to invoke when a matching file is found.
     * @param pattern The pattern to filter the file names by.  If empty, all files are passed.
     */
    void each_file(std::string const& path, std::function<bool(std::string const&)> callback, std::string const& pattern = {});

    /**
     * Enumerates the subdirectories in the given directory.
     * @param path The directory path to search for the subdirectories.
     * @param callback The callback to invoke when a matching subdirectory is found.
     * @param pattern The pattern to filter the subdirectory names by.  If empty, all subdirectories are passed.
     */
    void each_subdirectory(std::string const& path, std::function<bool(std::string const&)> callback, std::string const& pattern = {});

}}  // namespace leatherman::file_util
