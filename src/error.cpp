// <insert copyright>

#include <camp/error.hpp>
#include <string.h>


namespace camp
{
//-------------------------------------------------------------------------------------------------
Error::~Error() throw()
{
}

//-------------------------------------------------------------------------------------------------
const char* Error::what() const throw()
{
    return "Unknown CAMP error";
}

//-------------------------------------------------------------------------------------------------
const char* Error::file() const throw()
{
    return m_file;
}

//-------------------------------------------------------------------------------------------------
int Error::line() const throw()
{
    return m_line;
}

//-------------------------------------------------------------------------------------------------
void Error::setContext(const char* file, int line) throw()
{
    strncpy(m_file, file, sizeof(m_file));
    m_line = line;
}

//-------------------------------------------------------------------------------------------------
Error::Error()
{
}

} // namespace camp
