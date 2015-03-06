/*
 * Copyright (c) 2005 Silicon Graphics, Inc.
 * All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it would be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write the Free Software Foundation,
 * Inc.,  51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */
#ifndef GUARD_PROJECT_H
#define GUARD_PROJECT_H

typedef unsigned int prid_t;

typedef struct fs_project {
	prid_t		pr_prid;	/* project identifier */
	char		*pr_name;	/* project name */
} fs_project_t;

extern void setprent(void);
extern void endprent(void);
extern fs_project_t *getprent(void);
extern fs_project_t *getprnam(char *__name);
extern fs_project_t *getprprid(prid_t __id);

typedef struct fs_project_path {
	prid_t		pp_prid;	/* project identifier */
	char		*pp_pathname;	/* pathname to root of project tree */
} fs_project_path_t;

extern void setprpathent(void);
extern void endprpathent(void);
extern fs_project_path_t *getprpathent(void);

extern void setprfiles(void);
extern char *projid_file;
extern char *projects_file;

extern int fgetproject(const char *path, prid_t *project);
extern int fsetproject(const char *path, prid_t project);

#endif /* GUARD_PROJECT_H */