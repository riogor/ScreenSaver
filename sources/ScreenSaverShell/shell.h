#ifndef SCREENSAVER_SCREENSAVERSHELL_SHELL_H
#define SCREENSAVER_SCREENSAVERSHELL_SHELL_H

namespace shell
{
    void CheckForActivity();

    int* LoadConfig();
    int CheckConfigValues(int*);

} // namespace shell

#endif // SCREENSAVER_SCREENSAVERSHELL_SHELL_H