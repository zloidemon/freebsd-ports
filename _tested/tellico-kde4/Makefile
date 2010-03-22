# New ports collection makefile for:	tellico-kde4
# Date created:		2010-02-15
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	tellico
PORTVERSION=	2.2
CATEGORIES=	misc kde
MASTER_SITES=	http://tellico-project.org/files/
PKGNAMESUFFIX=	-kde4
DISTNAME=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Collection manager for KDE

USE_BZIP2=	yes
USE_CMAKE=	yes
USE_GETTEXT=	yes
USE_KDE4=	kdeprefix kdelibs kdehier automoc4
USE_QT_VER=	4
QT_COMPONENTS=	qmake_build moc_build rcc_build uic_build \
		corelib xml gui

.include <bsd.port.mk>
