# New ports collection makefile for:	cursor-chameleon
# Date created:		2009-11-14
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	chameleon
PORTVERSION=	0.5
CATEGORIES=	x11-themes
MASTER_SITES=	http://www.egregorion.net/works/
PKGNAMEPREFIX=	cursor-
DISTFILES=	#

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Chameleon Xcursors theme

NO_BUILD=	yes
USE_BZIP2=	yes

OPTIONS=	WHITE "Chameleon White" on\
		PEARL "Chameleon Pearl" off\
		SKY "Chameleon SkyBlue" off\
		DARK "Chameleon DarkSkyBlue" off\
		ANTH "Chameleon Anthracite" off

.include <bsd.port.pre.mk>

.if defined(WITHOUT_WHITE)
PLIST_SUB+=	WHITE="@comment "
.else
PLIST_SUB+=	WHITE=""
DISTFILES+=	Chameleon-White-${PORTVERSION}.tar.bz2
.endif

.if defined(WITHOUT_PEARL)
PLIST_SUB+=	PEARL="@comment "
.else
PLIST_SUB+=	PEARL=""
DISTFILES+=	Chameleon-Pearl-${PORTVERSION}.tar.bz2
.endif

.if defined(WITHOUT_SKY)
PLIST_SUB+=	SKY="@comment "
.else
PLIST_SUB+=	SKY=""
DISTFILES+=	Chameleon-SkyBlue-${PORTVERSION}.tar.bz2
.endif

.if defined(WITHOUT_DARK)
PLIST_SUB+=	DARK="@comment "
.else
PLIST_SUB+=	DARK=""
DISTFILES+=	Chameleon-DarkSkyBlue-${PORTVERSION}.tar.bz2
.endif

.if defined(WITHOUT_ANTH)
PLIST_SUB+=	ANTH="@comment "
.else
PLIST_SUB+=	ANTH=""
DISTFILES+=	Chameleon-Anthracite-${PORTVERSION}.tar.bz2
.endif

do-install:
.if !defined(WITHOUT_WHITE)
	@${MKDIR} ${PREFIX}/lib/X11/icons/${PORTNAME}-white-large \
		${PREFIX}/lib/X11/icons/${PORTNAME}-white-regular \
		${PREFIX}/lib/X11/icons/${PORTNAME}-white-small
	cd ${WRKDIR}/Chameleon-White-Large-${PORTVERSION} && ${CP} -R * \
		${PREFIX}/lib/X11/icons/${PORTNAME}-white-large
	cd ${WRKDIR}/Chameleon-White-Regular-${PORTVERSION} && ${CP} -R * \
		${PREFIX}/lib/X11/icons/${PORTNAME}-white-regular
	cd ${WRKDIR}/Chameleon-White-Small-${PORTVERSION} && ${CP} -R * \
		${PREFIX}/lib/X11/icons/${PORTNAME}-white-small
.endif

.if !defined(WITHOUT_PEARL)
	@${MKDIR} ${PREFIX}/lib/X11/icons/${PORTNAME}-pearl-large \
		${PREFIX}/lib/X11/icons/${PORTNAME}-pearl-regular \
		${PREFIX}/lib/X11/icons/${PORTNAME}-pearl-small
	cd ${WRKDIR}/Chameleon-Pearl-Large-${PORTVERSION} && ${CP} -R * \
		${PREFIX}/lib/X11/icons/${PORTNAME}-pearl-large
	cd ${WRKDIR}/Chameleon-Pearl-Regular-${PORTVERSION} && ${CP} -R * \
		${PREFIX}/lib/X11/icons/${PORTNAME}-pearl-regular
	cd ${WRKDIR}/Chameleon-Pearl-Small-${PORTVERSION} && ${CP} -R * \
		${PREFIX}/lib/X11/icons/${PORTNAME}-pearl-small
.endif

.if !defined(WITHOUT_SKY)
	@${MKDIR} ${PREFIX}/lib/X11/icons/${PORTNAME}-skyblue-large \
		${PREFIX}/lib/X11/icons/${PORTNAME}-skyblue-regular \
		${PREFIX}/lib/X11/icons/${PORTNAME}-skyblue-small
	cd ${WRKDIR}/Chameleon-SkyBlue-Large-${PORTVERSION} && ${CP} -R * \
		${PREFIX}/lib/X11/icons/${PORTNAME}-skyblue-large
	cd ${WRKDIR}/Chameleon-SkyBlue-Regular-${PORTVERSION} && ${CP} -R * \
		${PREFIX}/lib/X11/icons/${PORTNAME}-skyblue-regular
	cd ${WRKDIR}/Chameleon-SkyBlue-Small-${PORTVERSION} && ${CP} -R * \
		${PREFIX}/lib/X11/icons/${PORTNAME}-skyblue-small
.endif

.if !defined(WITHOUT_DARK)
	@${MKDIR} ${PREFIX}/lib/X11/icons/${PORTNAME}-darkskyblue-large \
		${PREFIX}/lib/X11/icons/${PORTNAME}-darkskyblue-small \
		${PREFIX}/lib/X11/icons/${PORTNAME}-darkskyblue-regular
	cd ${WRKDIR}/Chameleon-DarkSkyBlue-Large-${PORTVERSION} && ${CP} -R * \
		${PREFIX}/lib/X11/icons/${PORTNAME}-darkskyblue-large
	cd ${WRKDIR}/Chameleon-DarkSkyBlue-Regular-${PORTVERSION} && ${CP} -R * \
		${PREFIX}/lib/X11/icons/${PORTNAME}-darkskyblue-regular
	cd ${WRKDIR}/Chameleon-DarkSkyBlue-Small-${PORTVERSION} && ${CP} -R * \
		${PREFIX}/lib/X11/icons/${PORTNAME}-darkskyblue-small
.endif

.if !defined(WITHOUT_ANTH)
	@${MKDIR} ${PREFIX}/lib/X11/icons/${PORTNAME}-anthracite-large \
		${PREFIX}/lib/X11/icons/${PORTNAME}-anthracite-regular \
		${PREFIX}/lib/X11/icons/${PORTNAME}-anthracite-small
	cd ${WRKDIR}/Chameleon-Anthracite-Large-${PORTVERSION} && ${CP} -R * \
		${PREFIX}/lib/X11/icons/${PORTNAME}-anthracite-large
	cd ${WRKDIR}/Chameleon-Anthracite-Regular-${PORTVERSION} && ${CP} -R * \
		${PREFIX}/lib/X11/icons/${PORTNAME}-anthracite-regular
	cd ${WRKDIR}/Chameleon-Anthracite-Small-${PORTVERSION} && ${CP} -R * \
		${PREFIX}/lib/X11/icons/${PORTNAME}-anthracite-small
.endif

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.post.mk>
