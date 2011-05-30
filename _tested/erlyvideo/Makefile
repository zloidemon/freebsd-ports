# New ports collection makefile for:    erlyvideo
# Date created:                         14 January 2011
# Whom:                                 Ruslan Mahmatkhanov <cvs-src@yandex.ru>
#
# $FreeBSD: ports/net/erlyvideo/Makefile,v 1.5 2011/03/27 10:12:44 miwi Exp $
#

PORTNAME=	erlyvideo
PORTVERSION=	3
CATEGORIES=	net
MASTER_SITES=	http://fbsd.zlonet.ru/temp/
DISTNAME=	${PORTNAME}

MAINTAINER=	cvs-src@yandex.ru
COMMENT=	RTMP flash streaming server written in erlang

BUILD_DEPENDS=	erlc:${PORTSDIR}/lang/erlang
RUN_DEPENDS=	erl:${PORTSDIR}/lang/erlang

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

USE_BZIP2=	yes
USE_GMAKE=	yes

ERLANGDIR=	${PREFIX}/lib/erlang
ERLYDIR=	${ERLANGDIR}/lib/${PORTNAME}-${PORTVERSION}
ERLYVIDEO=	apps/${PORTNAME}/ebin apps/${PORTNAME}/src apps/${PORTNAME}/include
DEPSLIST=	amf log4erl erlydtl erlmedia mpegts rtmp rtp rtsp ibrowse
PLIST_SUB=	PORTNAME=${PORTNAME} PORTVERSION=${PORTVERSION}
SUB_FILES=	pkg-deinstall

post-patch:
	@${REINPLACE_CMD} -e 's#/etc/#${PREFIX}/etc/#g' \
		${WRKSRC}/apps/${PORTNAME}/src/${PORTNAME}.erl ${WRKSRC}/contrib/erlyctl \
		${WRKSRC}/apps/erlmedia/src/ems_log.erl
	@${REINPLACE_CMD} -e 's#"wwwroot"#"${PREFIX}/www/${PORTNAME}/wwwroot"#g' \
		${WRKSRC}/priv/${PORTNAME}.conf.sample
	@${REINPLACE_CMD} -e 's#"movies"#"/var/lib/${PORTNAME}/movies"#g' \
		${WRKSRC}/priv/${PORTNAME}.conf.sample
	@${FIND} ${WRKSRC} -type f -name .gitignore | ${XARGS} ${RM}
	@${FIND} ${WRKSRC} -type f -name "*.bak" | ${XARGS} ${RM}

do-install:
	${MKDIR} ${ETCDIR} ${ERLYDIR} ${WWWDIR}
.for dir in /var/lib/${PORTNAME}/movies /var/lib/${PORTNAME}/plugins \
	/var/log/${PORTNAME} /var/cache/${PORTNAME}/licensed
	${MKDIR} ${dir}
.endfor
.for entry in ${ERLYVIDEO}
	(cd ${WRKSRC} && ${COPYTREE_SHARE} ${entry} ${ERLYDIR}/)
.endfor
	${INSTALL_SCRIPT} ${WRKSRC}/contrib/reverse_mpegts ${PREFIX}/bin/reverse_mpegts
	${INSTALL_SCRIPT} ${WRKSRC}/contrib/erlyctl ${PREFIX}/bin/erlyctl
	${INSTALL_SCRIPT} ${WRKSRC}/contrib/rtmp_bench ${PREFIX}/bin/rtmp_bench
	(cd ${WRKSRC} && ${COPYTREE_SHARE} wwwroot ${WWWDIR})
	${CP} ${WRKSRC}/priv/${PORTNAME}.conf.sample ${ETCDIR}/${PORTNAME}.conf.sample
	${CP} ${WRKSRC}/priv/log4erl.conf.sample ${ETCDIR}/log4erl.conf.sample
.include <bsd.port.mk>
