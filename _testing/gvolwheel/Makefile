# New ports collection makefile for:	gvolwheel
# Date created:		2010-06-08
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	gvolwheel
PORTVERSION=	0.7
CATEGORIES=	audio
MASTER_SITES=	SF/${PORTNAME}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Volume mixer

LICENSE=	GPLv3

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_ICONV=	yes
USE_GNOME=	gnomehack

.include <bsd.port.pre.mk>

pre-configure:
	${REINPLACE_CMD} -e 's|linux/soundcard|sys/soundcard|g' \
		${WRKSRC}/src/callbacks.c ${WRKSRC}/src/actions.c

.if !defined(NOPORTDOCS)
.endif

.if defined(WITHOUT_NLS)
CONFIGURE_ARGS+=	--disable-nls
PLIST_SUB+=	NLS="@comment "
.else
PLIST_SUB+=	NLS=""
USE_GETTEXT=	yes
.endif

.include <bsd.port.post.mk>
